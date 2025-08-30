#include "my_stringLibrary.h"

/**
 * Removes right spaces
 */
void rm_right_space(char * s)
{
    int i = myStrlen(s) - 1;
    while(s[i] == ' ')
    {
        s[i] = '\0';
        i--;
    }
}

/*
iterate from the back of the string until you reach non-whitespace
update '\0'
*/