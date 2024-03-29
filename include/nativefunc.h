#ifndef clox_nativefunc_h
#define clox_nativefunc_h

#include "value.h"

typedef struct
{
    char	 *name;
    NativeFn  func;
} NativeFunc;

Value nativeType(int argCount, Value *args);
Value nativeExit(int argCount, Value *args);
Value nativeClock(int argCount, Value *args);
Value nativePrint(int argCount, Value *args);
Value nativePrintln(int argCount, Value *args);
Value nativeInput(int argCount, Value *args);

#endif
