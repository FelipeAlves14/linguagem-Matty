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

  echo Compilando com ANTLR4 + LLVM...
  cl /std:c++17 /EHsc /I . /I "%ANTLR_INCLUDE%" /I "%LLVM_INCLUDE%" .\lang\AST\makeAST.cpp .\lang\*.cpp /link /LIBPATH:"%VCPKG_LIB%" antlr4-runtime.lib LLVMCore.lib LLVMIRReader.lib LLVMCodeGen.lib LLVMTarget.lib LLVMAnalysis.lib LLVMSupport.lib
if errorlevel 1 exit /b %errorlevel%

echo Copiando runtime DLL...
copy /Y "%VCPKG_ROOT%\installed\x64-windows\bin\antlr4-runtime.dll" . >nul
exit /b %errorlevel%