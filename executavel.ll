; ModuleID = 'Executável'
source_filename = "MattyModule"
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@dPrint = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@fPrint = private unnamed_addr constant [4 x i8] c"%f\0A\00", align 1
@cPrint = private unnamed_addr constant [4 x i8] c"%c\0A\00", align 1
@sPrint = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1
@dScanf = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@fScanf = private unnamed_addr constant [3 x i8] c"%f\00", align 1
@cScanf = private unnamed_addr constant [3 x i8] c"%c\00", align 1
@sScanf = private unnamed_addr constant [3 x i8] c"%s\00", align 1

define i32 @main() {
entrada:
  %ave = alloca i32, align 4
  store i32 2, ptr %ave, align 4
  %0 = load i32, ptr %ave, align 4
  %1 = load i32, ptr %ave, align 4
  %2 = add i32 %0, %1
  %maria = alloca i32, align 4
  store i32 %2, ptr %maria, align 4
  %3 = load i32, ptr %ave, align 4
  %4 = call i32 (ptr, ...) @printf(i32 %3)
  %5 = load i32, ptr %maria, align 4
  %6 = call i32 (ptr, ...) @printf(i32 %5)
  ret i32 0
}

declare i32 @printf(ptr, ...)

declare i32 @scanf(ptr, ...)
