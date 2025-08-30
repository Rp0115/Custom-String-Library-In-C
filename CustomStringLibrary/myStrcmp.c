#include "my_stringLibrary.h"

/**
 * 1 if same strings
 * Else 0
 */
int myStrcmp(char * s1, char * s2)
{
    if(myStrlen(s1) != myStrlen(s2))
    {
        return 0;
    }
    else
    {
        int i = 0;
        while(s1[i] != '\0')
        {
            if(s1[i] != s2[i])
            {
                return 0;
            }
            i++;
        }
        return 1;
    }
}

/*
if lengths of s1 s2 differ, return 0
if they are same, iterate through their elements and if anything differ, return 0
else return 1
*/