#include "my_stringLibrary.h"

/**
 * Returns a copy of the string s, but with each instance of pat replaced with rep, note that len(pat) can be
 * less than, greater than, or equal to len(rep). 
 */
char * replace(char * s, char * pat, char * rep)
{
    if(myStrcmp(pat, rep))
    {
        return s;
    }
    
    int index = 0;
    char * ptr = (char *)malloc(myStrlen(s) + 1);
    copyToEmptyString(s, ptr);

    while((index = find(ptr, pat)) != -1)
    {
        //ptr = removeCharAtIndex(ptr, index);
        ptr = removeStringAtIndex(ptr, myStrlen(pat), index);
        ptr = insertInBetween(ptr, rep, index);
    }
    return ptr;
}

/*
use find function to get index. as long as it is not -1, it means there is something we can replace
"cheese method"
use removeStringAtIndex function to remove the string pat
use insertInBetween function to put the string rep in between index-1 and index+1
*/