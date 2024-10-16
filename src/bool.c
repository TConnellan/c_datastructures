#include "../include/bool.h"
#include <stdio.h>
#include <stdlib.h>

boolean is_valid_boolean(boolean arg) {
    if ((arg != true) && (arg != false)) {
        return false;
    }
    return true;
}

boolean XOR(boolean arg1, boolean arg2) {
    if (!is_valid_boolean(arg1) || !is_valid_boolean(arg2)) {
        printf("An error occurred, %u or %u is not a valid value for boolean", arg1, arg2);
        exit(1);
    }
    return arg1 + arg2 == 1;
}