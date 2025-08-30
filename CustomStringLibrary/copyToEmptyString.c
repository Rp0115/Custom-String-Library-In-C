#include "my_stringLibrary.h"

/**
 * Copy from src to dst
 */
void copyToEmptyString(char * src, char * dst)
{
    int i = 0;
    while(src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}