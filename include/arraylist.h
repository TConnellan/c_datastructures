#ifndef _CONNELLT_ARRAYLIST_H
#define _CONNELLT_ARRAYLIST_H 1

typedef struct 
{
    int capacity;
    int length;
    int* list;
} arraylist;

arraylist arraylist_init(int capacity);
void arraylist_append(arraylist *arr, int i);
int arraylist_get(arraylist *arr, int index);
void arraylist_pop(arraylist *arr);
int arraylist_pop_at(arraylist *arr, int index);
void arraylist_free(arraylist *arr);
void arraylist_print(arraylist *arr);
int arraylist_valid_index(arraylist *arr, int index);

#endif