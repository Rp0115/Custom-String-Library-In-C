#include "my_stringLibrary.h"

/**
 * Add char c at the end of string s
 */
char * addCharAtEnd(char * s, char c)
{
    int len = myStrlen(s);

    char * ptr = (char *)malloc(len + 2);

    int i = 0;
    while(s[i] != '\0')
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = c;
    ptr[i+1] = '\0';

    return ptr;
}