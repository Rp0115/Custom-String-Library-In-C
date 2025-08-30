#include "my_stringLibrary.h"

/**
 * If char s is a lowercase letter, function returns 1
 * Else, function returns 0
 */
int is_lowercase(char s)
{
    return (s >= 97 && s <= 122) ? 1 : 0;
}

/*
if char s is in the range 97 <= s <= 122, then it is a lowercase letter
return 1 if it is in this range
return 0 if it is NOT in this range
*/