#include "bool.h"

boolean is_valid_boolean(boolean arg) {
    if ((arg != true) && (arg != false)) {
        return false;
    }
    return true;
}

boolean XOR(boolean arg1, boolean arg2) {
    return arg1 + arg2 == 1;
}