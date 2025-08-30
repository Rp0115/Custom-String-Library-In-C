#include "my_stringLibrary.h"

/**
 * Returns the lowercase of char s
 */
char to_lowercase(char s)
{
    if(is_uppercase(s))
    {
        return s + 32;
    }
    else
    {
        return s;
    }
}

/*
first check if char s is uppercase
if it is uppercase, return s + 32 to make it into a lower case
else return s because it means it is not an uppercase letter (it could also mean that char s is not a letter)
*/