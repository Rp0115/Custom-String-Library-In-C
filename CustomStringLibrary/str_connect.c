#include "my_stringLibrary.h"

char * str_connect(char ** strs, int n, char c)
{
    char * ptr = (char *)malloc(myStrlen(strs[0]));
    copyToEmptyString(strs[0], ptr);
    ptr = addCharAtEnd(ptr, c);
    
    for(int i = 1; i < n; i++)
    {
        ptr = myStrcat(ptr, strs[i]);
        ptr = addCharAtEnd(ptr, c);
    }

    shorten(ptr, myStrlen(ptr) - 1);

    return ptr;
}

/*
make string and have the first string in array strs copied
add char c at the end
then use for loop from 1 to n and keep concatenating and adding char at end
use shorten function to remove last char c
*/