#include "my_stringLibrary.h"

/**
 * 0 if both strings are equal
 * -1 if s1 appears first
 * 1 if s2 appears first
 */
int strcmp_ign_case(char * s1, char * s2)
{
    if(myStrcmp(s1, s2))
    {
        return 0;
    }
    else
    {
        return largerString(s1, s2);
    }
}

/*
first check if s1 s2 are same. if they are, return 0
else call largerString function
*/