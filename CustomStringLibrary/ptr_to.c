#include "my_stringLibrary.h"

/**
 * returns a pointer to first occurence of n in string or NULL
 */
char * ptr_to(char * h, char * n)
{
    int index = find(h, n);
    char * ptr = (char *)malloc(myStrlen(n) + 1);
    int i = 0;
    for(i = 0; i < myStrlen(n); i++)
    {
        ptr[i] = h[index++];
    }
    ptr[i] = '\0';

    return index == -1 ? '\0':ptr;
}
/*
call find function
make a pointer copying the values
return the pointer
*/