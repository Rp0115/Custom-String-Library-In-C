#include "my_stringLibrary.h"

/**
 * 
 */
void rm_empties(char ** words)
{
    int i = 0;
    while(words[i] != '\0')
    {
        if(is_empty(words[i]))
        {
            shiftStringsLeft(words, i);
        }
        i++;
    }
}

/*
do a while not NULL loop
if element is empty, use shiftStringsLeft function
*/