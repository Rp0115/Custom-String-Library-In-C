#include "my_stringLibrary.h"

/**
 * Returns a new string consisting of all of the letters of s, but padded with spaces at the end so that the total
 * length of the returned string is an even multiple of d.
 */
char * pad(char * s, int d)
{
    if(s == '\0')
    {
        return '\0';
    }

    int len = myStrlen(s);
    int remainder = d - (len % d);
    if(remainder == d)
    {
        return s;
    }
    else
    {
        int index = len;
        char * ptr = (char *)malloc(len + remainder + 1);

        if(ptr == '\0')
        {
            return '\0';
        }

        copyToEmptyString(s, ptr);

        for(int i = 0; i < remainder; i++)
        {
            ptr[index] = ' ';
            index++;
        }
        ptr[index] = '\0';
        return ptr;
    }
}

/*
if s == NULL, return NULL
calculate remainder and subtract from d to indicate how many whitespaces need to be added
if remainder == d, it means we do not need to add anything
else
add remainder amount of whitespaces to s
*/