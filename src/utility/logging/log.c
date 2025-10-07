#include "log.h"
#include <stdbool.h>
#include <stdio.h>

bool assert_log(bool condition, char *file, char *error) {
    if (condition == false) {
        printf("ERROR: %s\nFILE: %s\n", error, file);
        return false;
    }
    return true;
}