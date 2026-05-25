#ifndef DYNARRAY_H
#define DYNARRAY_H

typedef struct {
    int *data;
    int size;
    int capacity;
} DynamicArray;

DynamicArray *da_create();
void da_push(DynamicArray *da, int val);
int da_get(DynamicArray *da, int index);
void da_free(DynamicArray *da);

#endif
