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

void da_push(DynamicArray *da, int val) {
    if (da->size == da->capacity) {
        int *new_data = realloc(da->data, sizeof(int) * da->capacity * 2);
        if (new_data == NULL) {
            printf("Error in memory allocation!\n");
            exit(1);
        }
        da->data = new_data;
        da->capacity *= 2;
    }

    da->data[da->size] = val;
    da->size++;

    return;
}

int da_get(DynamicArray *da, int index) {
    if (index >= da->size || index < 0) {
        printf("Error: cannot access element, out of bounds!");
        return -1;
    } else
        return da->data[index];
}

void da_free(DynamicArray *da) {
    free(da->data);
    free(da);
}
