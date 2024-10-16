#include <stdio.h>
#include "bool.h"

int main(int argc, char *argv[]) {
    boolean x = true;
    boolean y = false;
    boolean z = true;
    boolean w = 3;
    
    printf("%u\n", is_valid_boolean(x));
    printf("%u\n", is_valid_boolean(y));
    printf("%u\n", is_valid_boolean(z));
    printf("%u\n", is_valid_boolean(w));

    printf("XOR(x,y) = %u\n", XOR(x,y));
    printf("XOR(x,z) = %u\n", XOR(x,z));

    return 0;
}
