#include "my_stringLibrary.h"

/**
 * Returns length of string
 */
int myStrlen(char * s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}

/*
counts the number of characters in string
includes spaces and symbols
*/