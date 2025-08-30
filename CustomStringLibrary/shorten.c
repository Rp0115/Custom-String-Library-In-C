#include "my_stringLibrary.h"

/**
 * Shortens the string
 */
void shorten(char * s, int new_len)
{
    if(new_len < myStrlen(s))
    {
        s[new_len] = '\0';
    }
}

/*
update the position of '\0'
*/