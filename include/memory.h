#ifndef clox_memory_h
#define clox_memory_h

#include "common.h"
#include "object.h"

#define DEFAULT_CAPACITY 8

#define ALLOCATE(type, count) \
    (type*)reallocate(NULL, 0, sizeof(type) * (count))

#define FREE(type, pointer) reallocate(pointer, sizeof(type), 0)

#define GROW_CAPACITY(capacity) \
    ((capacity) < DEFAULT_CAPACITY ? DEFAULT_CAPACITY : (capacity) * 2)

#define GROW_ARRAY(previous, type, oldCount, count) \
    (type*)reallocate(previous, sizeof(type) * (oldCount), \
            sizeof(type) * (count))

#define FREE_ARRAY(type, pointer, oldCount) \
    reallocate(pointer, sizeof(type) * (oldCount), 0)

void *reallocate(void *previous, size_t oldSize, size_t newSize);
void markObject(Obj *object);
void markValue(Value value);
void collectGarbage(void);
void freeObjects(void);

#endif
