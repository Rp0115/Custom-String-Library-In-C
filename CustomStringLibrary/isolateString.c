#include "my_stringLibrary.h"

/**
 * Isolates a string from a larger string
 */
char * isolateString(char * s, int endIndex)
{
    char * ptr = (char*)malloc(endIndex + 1 + 1);   //+ 1 for \0

    int i = 0;
    while(i < endIndex && s[i] != '\0')
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}