#include "my_stringLibrary.h"

/**
 * Capitalizes the first letter of each word
 */
void capitalize(char * s)
{
    s[0] = to_uppercase(s[0]);
    int i = 1;
    while(s[i] != '\0')
    {
        if(s[i] == ' ')
        {
            s[i+1] = to_uppercase(s[i+1]);
        }
        i++;
    }
}

/*
capitalize the first letter of the word/words
then iterate through the string
if there are any whitespace, call to_uppercase for the element to the right of whitespace
*/