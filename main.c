#include "dynarray.h"
#include <stdio.h>

int main() {

    DynamicArray *array = da_create();

    da_push(array, 1);
    da_push(array, 2);
    da_push(array, 3);
    da_push(array, 4);
    da_push(array, 5);
    da_push(array, 6);

    printf("%d ", da_get(array, 0));
    printf("%d ", da_get(array, 1));
    printf("%d ", da_get(array, 2));

    da_free(array);

    return 0;
}
