#include "my_stringLibrary.h"

/**
 * Shifting elements of an array of strings with a NULL pointer at the end to the right, given an index to start
 */
void shiftStringsLeft(char ** strs, int index)
{
    while(strs[index + 1] != '\0')
    {
        strs[index] = strs[index+1];
        index++;
    }
    strs[index] = '\0';
}