cmake_minimum_required(VERSION 3.21)
project(linguagem_Matty LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT DEFINED VCPKG_ROOT)
  if(DEFINED ENV{VCPKG_ROOT})
    set(VCPKG_ROOT $ENV{VCPKG_ROOT})
  else()
    set(VCPKG_ROOT "C:/vcpkg")
  endif()
endif()

set(VCPKG_INSTALLED_LIB "${VCPKG_ROOT}/installed/x64-windows/lib")
set(VCPKG_INSTALLED_INCLUDE "${VCPKG_ROOT}/installed/x64-windows/include")
set(VCPKG_ANTLR4_INCLUDE "${VCPKG_INSTALLED_INCLUDE}/antlr4-runtime")

include_directories(${CMAKE_SOURCE_DIR} ${VCPKG_INSTALLED_INCLUDE} ${VCPKG_ANTLR4_INCLUDE})

file(GLOB PROJECT_SOURCES
  "${CMAKE_SOURCE_DIR}/lang/*.cpp"
  "${CMAKE_SOURCE_DIR}/lang/AST/*.cpp"
)

add_executable(makeAST ${PROJECT_SOURCES})

set(REQ_LIBS
  antlr4-runtime
  LLVMCore
  LLVMIRReader
  LLVMCodeGen
  LLVMTarget
  LLVMAnalysis
  LLVMBinaryFormat
  LLVMSupport
  LLVMTargetParser
  LLVMTransformUtils
  LLVMAsmParser
  LLVMBitWriter
  LLVMScalarOpts
  LLVMSelectionDAG
  LLVMMCParser
  LLVMMCDisassembler
  LLVMDebugInfoDWARF
  LLVMDWARFLinker
  LLVMDWARFLinkerClassic
  LLVMDWARFLinkerParallel
  LLVMDebugInfoCodeView
  LLVMDebugInfoPDB
  LLVMDebugInfoLogicalView
  LLVMDebugInfoBTF
  LLVMDebuginfod
  LLVMDebugInfoGSYM
  LLVMDebugInfoMSF
  LLVMDebugInfoLogicalView
  LLVMDemangle
  LLVMSymbolize
  LLVMLinker
  LLVMMC
  LLVMAsmPrinter
  LLVMIRPrinter
  LLVMObjCopy
  LLVMProfileData
  LLVMPasses
  LLVMRemarks
  LLVMBitReader
  LLVMBitstreamReader
  LLVMObject
  LLVMOption
  LLVMObjectYAML
  Ws2_32
)

set(LINK_LIBS)
foreach(l ${REQ_LIBS})
  if(l STREQUAL "Ws2_32")
    list(APPEND LINK_LIBS Ws2_32)
  else()
    list(APPEND LINK_LIBS "${VCPKG_INSTALLED_LIB}/${l}.lib")
  endif()
endforeach()

target_link_libraries(makeAST PRIVATE ${LINK_LIBS})

set_target_properties(makeAST PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
if(MSVC)
  set_target_properties(makeAST PROPERTIES RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/bin)
endif()

message(STATUS "Configured project. Using VCPKG root: ${VCPKG_ROOT}")
