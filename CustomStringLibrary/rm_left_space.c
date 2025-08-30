#include "my_stringLibrary.h"

/**
 * Removes left spaces
 */
void rm_left_space(char * s)
{
    int i = 0;
    while(s[i] == ' ')
    {
        i++;
    }
    
    // int j = 0;
    // while(s[i] != '\0')
    // {
    //     s[j] = s[i];
    //     j++;
    //     i++;
    // }
    // s[j] = '\0';
    remakeString(s, i);
}

/*
start iterating over the string
once reach a char that is NOT whitespace ' ', call remakeString
*/