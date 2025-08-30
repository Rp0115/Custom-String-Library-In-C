#include "my_stringLibrary.h"

/**
 * Return number of characters in between char b and char t
 */
int num_in_range(char * s1, char b, char t)
{
    int i = 0;
    int count = 0;
    int trueOrFalse = 0;

    while(s1[i] != '\0')
    {
        if(s1[i] == b)
        {
            trueOrFalse = 1;
        }
        if(trueOrFalse)
        {
            count++;
        }
        if(s1[i] == t)
        {
            trueOrFalse = 0;
        }
        i++;
    }

    return count;
}

/*
return number of characters in between char b and char t
in one while loop, check if b is found. if found, increment counter. if t is found, stop incrementing counter
return counter
*/