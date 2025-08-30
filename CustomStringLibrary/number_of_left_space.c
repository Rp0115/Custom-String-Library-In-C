#include "my_stringLibrary.h"

/**
 * Counts the number of left whitespaces
 */
int number_of_left_space(char * s)
{
    int i = 0;
    while(s[i] == ' ' && s[i] != '\0')
    {
        i++;
    }
    return i;
}
