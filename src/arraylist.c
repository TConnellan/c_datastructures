#include "../include/arraylist.h"
#include <stdlib.h>
#include <stdio.h>

arraylist arraylist_init(int capacity) {
    arraylist x = { .capacity = capacity, .length = 0, .list = malloc(capacity * sizeof(int))};
    return x;
}

int arraylist_valid_index(arraylist *arr, int index) {
    if (index < 0 || index >= arr->length) {
        return 0;
    }
    return 1;
}

void arraylist_append(arraylist *arr, int val) {
    if (arr->length >= arr->capacity) {
        int newCapacity = (arr->capacity) * 2;
        arr->list = realloc(arr->list, newCapacity*sizeof(int));
        arr->capacity = newCapacity;
    }
    arr->list[arr->length] = val;
    arr->length += 1;

    return;
}

int arraylist_get(arraylist *arr, int index) {
    if (!arraylist_valid_index(arr, index)) {
        printf("error: index %d out of bounds. arr has length %d\n", index, arr->length);
        exit(1);
    }
    return arr->list[index];
}

void arraylist_pop(arraylist *arr) {
    if (arr->length == 0) {
        return;
    }
    arr->length -= 1;
    return;
}

int arraylist_pop_at(arraylist *arr, int index) {
    if (!arraylist_valid_index(arr, index)) {
        exit(1);
    }
    int out = arr->list[index];
    for (int i = index + 1; i < arr->length; ++i) {
        arr->list[i - 1] = arr->list[i];
    }
    arr->length -= 1;
    return out;
}

void arraylist_free(arraylist *arr) {
    free(arr->list);
}

void arraylist_print(arraylist *arr) {
    printf("capacity: %d\n", arr->capacity);
    printf("length: %d\n", arr->length);
    printf("[");
    for (int i = 0; i < arr->length; ++i) {
        printf("%d, ", arr->list[i]);
    }
    printf("]\n");

    return;
}