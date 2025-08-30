#include "my_stringLibrary.h"

/**
 * Returns strcmp of suffix and last "suffix" numbers of characters of string s
 */
int ends_with_ignore_case(char * s, char * suff)
{
    int len1 = myStrlen(s);
    int len2 = myStrlen(suff);
    if(len2 > len1)
    {
        return 0;
    }
    char * ptr = (char *)malloc(len1 + 1);
    copyToEmptyString(s, ptr);
    take_last(ptr, len2);
    return myStrcmp(ptr, suff);
}

/*
use take_last to get suffix string, with same length of given suffix's length
use myStrcmp to compare if given suffix == suffix of of string s 
*/