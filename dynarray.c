#include "dynarray.h"
#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 4

DynamicArray *da_create() {
    DynamicArray *array = malloc(sizeof(DynamicArray));

    if (array == NULL) {
        printf("Error in memory allocation!\n");
        exit(1);
    }

    array->data = malloc(sizeof(int) * INITIAL_CAPACITY);
    if (array->data == NULL) {
        printf("Error in memory allocation!\n");
        exit(1);
    }

    array->size = 0;
    array->capacity = INITIAL_CAPACITY;

    return array;
}
