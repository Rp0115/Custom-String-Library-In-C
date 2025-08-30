#include "my_stringLibrary.h"

/**
 * Remove a specific char given an index
 */
char * removeCharAtIndex(char * s, int index)
{
    int len = myStrlen(s);
    if(index >= len)
    {
        return '\0';
    }

    char * ptr = (char *)malloc(len);   //also len-1 + 1

    int i = 0;
    int stoppedAtIndex = 0;
    while((i < index) && (s[i] != '\0'))
    {
        ptr[i] = s[i];
        i++;
        stoppedAtIndex++;
    }
    stoppedAtIndex++;
    while(s[stoppedAtIndex] != '\0')
    {
        ptr[i] = s[stoppedAtIndex];
        i++;
        stoppedAtIndex++;
    }
    ptr[i] = '\0';
    return ptr;
}