#include "my_stringLibrary.h"

/**
 * similar to removeCharAtIndex
 * remove a sequence of chars
 */
char * removeStringAtIndex(char * s, int lenOfString, int startIndex)
{
    int len = myStrlen(s);
    int endIndex = startIndex + lenOfString;

    char * ptr = (char *)malloc(len - lenOfString + 1);

    int i = 0;
    while(i < startIndex && s[i] != '\0')
    {
        ptr[i] = s[i];
        i++;
    }

    //printf("t or f = %d\n", endIndex == stoppedAtIndex + len);
    
    while(s[endIndex] != '\0')
    {
        ptr[i] = s[endIndex];
        i++;
        endIndex++;
    }
    ptr[i] = '\0';

    return ptr;
}