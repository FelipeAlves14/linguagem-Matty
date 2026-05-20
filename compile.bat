@echo off
setlocal

set "VCPKG_ROOT=C:\vcpkg"
set "ANTLR_INCLUDE=%VCPKG_ROOT%\installed\x64-windows\include\antlr4-runtime"
set "VCPKG_LIB=%VCPKG_ROOT%\installed\x64-windows\lib"
set "LLVM_INCLUDE=%VCPKG_ROOT%\installed\x64-windows\include"

if not exist "%ANTLR_INCLUDE%\antlr4-runtime.h" (
  echo [ERRO] Nao encontrei antlr4-runtime.h em "%ANTLR_INCLUDE%".
  echo Verifique se o ANTLR4 C++ runtime foi instalado no vcpkg.
  exit /b 1
)

if not exist "%VCPKG_LIB%\antlr4-runtime.lib" (
  echo [ERRO] Nao encontrei antlr4-runtime.lib em "%VCPKG_LIB%".
  echo Verifique se o ANTLR4 C++ runtime foi instalado no vcpkg.
  exit /b 1
)


if not exist "%LLVM_INCLUDE%\llvm\IR\LLVMContext.h" (
  echo [ERRO] Nao encontrei LLVM headers em "%LLVM_INCLUDE%\llvm\IR".
  echo Verifique se o LLVM foi instalado no vcpkg.
  exit /b 1
)
echo Configurando build com CMake (usando vcpkg)...
where cmake >nul 2>&1
if errorlevel 1 (
  echo [ERRO] CMake nao encontrado no PATH. Instale CMake ou adicione ao PATH.
  exit /b 1
)

if not exist build mkdir build
pushd build
cmake -DCMAKE_TOOLCHAIN_FILE="%VCPKG_ROOT%\scripts\buildsystems\vcpkg.cmake" -DCMAKE_BUILD_TYPE=Release ..
if errorlevel 1 (
  popd
  exit /b %errorlevel%
)

cmake --build . --config Release
if errorlevel 1 (
  popd
  exit /b %errorlevel%
)

popd

echo Copiando runtime DLL para build/bin...
if exist "%VCPKG_ROOT%\installed\x64-windows\bin\antlr4-runtime.dll" (
  copy /Y "%VCPKG_ROOT%\installed\x64-windows\bin\antlr4-runtime.dll" "build\bin\" >nul
) else (
  echo [AVISO] antlr4-runtime.dll nao encontrada em %VCPKG_ROOT%\installed\x64-windows\bin
)

call lang\AST\makeAST.cpp main.my
call build\bin\makeAST.exe main.my

call clang .\executavel.ll .\runtime.cpp -o out.exe

exit /b 0