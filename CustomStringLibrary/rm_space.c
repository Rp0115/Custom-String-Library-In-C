#include "my_stringLibrary.h"

/**
 * Removes leading spaces from left and right
 */
void rm_space(char * s)
{
    rm_left_space(s);
    rm_right_space(s);
}

/*
call rm_left_space and rm_right_space
*/