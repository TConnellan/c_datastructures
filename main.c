#include <stdio.h>
#include "include/bool.h"
#include "include/arraylist.h"

int main(int argc, char *argv[]) {
    // boolean x = true;
    // boolean y = false;
    // boolean z = true;
    // boolean w = 3;
    
    // printf("%u\n", is_valid_boolean(x));
    // printf("%u\n", is_valid_boolean(y));
    // printf("%u\n", is_valid_boolean(z));
    // printf("%u\n", is_valid_boolean(w));

    // printf("XOR(x,y) = %u\n", XOR(x,y));
    // printf("XOR(x,z) = %u\n", XOR(x,z));
    // XOR(5,5);

    arraylist arr = arraylist_init(5);
    arraylist_append(&arr, 5);
    arraylist_append(&arr, 6);
    arraylist_append(&arr, 7);
    arraylist_append(&arr, 8);
    arraylist_print(&arr);
    arraylist_pop(&arr);
    arraylist_print(&arr);
    arraylist_pop_at(&arr, 0);
    arraylist_print(&arr);
    arraylist_append(&arr, 50);
    arraylist_append(&arr, 60);
    arraylist_append(&arr, 70);
    arraylist_append(&arr, 80);
    arraylist_print(&arr);
    arraylist_pop(&arr);
    arraylist_pop(&arr);
    arraylist_pop(&arr);
    arraylist_pop(&arr);
    arraylist_pop(&arr);
    arraylist_pop(&arr);
    arraylist_print(&arr);
    arraylist_pop(&arr);
    arraylist_print(&arr);
    arraylist_get(&arr, 100);

    return 0;
}
