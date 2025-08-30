#include "my_stringLibrary.h"

/**
 * Returns the uppercase of char s
 */
char to_uppercase(char s)
{
    if(is_lowercase(s))
    {
        return s - 32;
    }
    else
    {
        return s;
    }
}

/*
opposite of to_lowercase
*/