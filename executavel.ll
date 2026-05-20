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
@fracPrint = private unnamed_addr constant [9 x i8] c"%d///%d\0A\00", align 1

define i32 @main() {
entrada:
  %leia_tmp = alloca i32, align 4
  %0 = call i32 (ptr, ...) @scanf(ptr @dScanf, ptr %leia_tmp)
  %1 = load i32, ptr %leia_tmp, align 4
  %ave = alloca i32, align 4
  store i32 %1, ptr %ave, align 4
  %2 = load i32, ptr %ave, align 4
  %3 = call i32 (ptr, ...) @printf(ptr @dPrint, i32 %2)
  ret i32 0
}

declare i32 @printf(ptr, ...)

declare i32 @scanf(ptr, ...)
