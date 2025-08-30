#include "my_stringLibrary.h"

/**
 * Shifts elements to the very left of a string
 */
void remakeString(char * s, int index)
{
    int j = 0;
    while(s[index] != '\0')
    {
        s[j] = s[index];
        j++;
        index++;
    }
    s[j] = '\0';
}

/*
Shifting elements to the very left so string can be read from index 0
*/