#include "my_stringLibrary.h"

/**
 * Deletes duplicate characters
 */
char * dedup(char * s)
{
    int len = myStrlen(s);
    char * ptr = (char *)malloc(len + 1);

    int trueOrFalse = 0;
    int i = 0;
    int lastInsertedIndex = 0;
    while(s[i] != '\0')
    {
        trueOrFalse = 0;
        for(int j = 0; j < i; j++)
        {
            if(ptr[j] == s[i])
            {
                trueOrFalse = 1;
            }
        }
        if(!trueOrFalse)
        {
            ptr[lastInsertedIndex] = s[i];
            lastInsertedIndex++;
        }
        i++;
    }
    ptr[lastInsertedIndex] = '\0';
    return ptr;
}

/*
iterate through s
have a new string to add characters to
for an element c in string s, if c is NOT in new string, add it. else, just keep iterating
*/