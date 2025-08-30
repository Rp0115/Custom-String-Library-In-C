#include "my_stringLibrary.h"

/**
 * Returns 1 if empty
 * Else 0
 */
int is_empty(char * s)
{
    if(s == '\0')
    {
        return 1;
    }
    else if(s[0] != '\0')
    {
        int i = 0;
        while(s[i] != '\0')
        {
            if(s[i] != ' ')
            {
                return 0;
            }
            i++;
            // if(s[i] != '')
            // {
            //     return 0;
            // }
        }
        return 1;
    }
    else
    {
        return 1;
    }
}

/*
if NULL, return 1
if not, traverse through string and if there any characters that are NOT whitespace, return 0
else return 1
*/