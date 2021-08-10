#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>

typedef struct {
    void* arr;
    size_t curlen;
    size_t capacity;
} Vector;

Vector* vector_create();
void vector_destroy();
Vector* vector_size();
void* vector_iterate(Vector* vector);
Vector* vector_insert(Vector* vector, void* item, int index);
Vector* vector_remove(Vector* vector, int index);
void* vector_index(Vector* vector, int index);
int vector_contains(Vector* vector, void* item,  int (*comp)(void*,void*));

#endif
