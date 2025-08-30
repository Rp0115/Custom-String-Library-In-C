#include "my_stringLibrary.h"

/**
 * If char s is an uppercase letter, function returns 1
 * Else, function returns 0
 */
int is_uppercase(char s)
{
    return (s >= 65 && s <= 90) ? 1 : 0;
}

/*
opposite of is_lowercase
*/