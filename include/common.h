#ifndef clox_common_h
#define clox_common_h

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define DEBUG_PRINT_CODE
#define DEBUG_TRACE_EXECUTION
#define DEBUG_STACK

#define DEBUG_STRESS_GC
#define DEBUG_LOG_GC

#undef DEBUG_LOG_GC
#undef DEBUG_STRESS_GC
#undef DEBUG_STACK
#undef DEBUG_TRACE_EXECUTION
#undef DEBUG_PRINT_CODE
#endif
