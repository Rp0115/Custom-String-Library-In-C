#include "my_stringLibrary.h"

/**
 * Returns number of positions in which s1 and s2 differ
 */
int diff(char * s1, char * s2)
{
    int len1 = myStrlen(s1);
    int len2 = myStrlen(s2);

    int difference = 0;

    if(len1 < len2)
    {
        int i = 0;
        while(s1[i] != '\0')
        {
            difference += (s1[i] != s2[i] ? 1:0);
            i++;
        }
        return difference + (len2 - len1);
    }
    else
    {
        int i = 0;
        while(s2[i] != '\0')
        {
            difference += (s2[i] != s1[i] ? 1:0);
            i++;
        }
        return difference + (len1 - len2);
    }
}

/*
find lengths of s1 s2
iterate smaller string
check at each index of the strings and add 1 to counter if characters are different
return counter + the remaining number of elements that were not iterated over (due to length differences)
*/