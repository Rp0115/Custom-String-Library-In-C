#include "my_stringLibrary.h"

/**
 * Returns a new string consising of all of the characters of s1 and s2 interleaved with each other
 */
char * str_zip(char * s1, char * s2)
{
    int len1 = myStrlen(s1);
    int len2 = myStrlen(s2);

    char * ptr = (char *)malloc(len1 + len2 + 1);

    int i = 0;
    int j = 0;
    while((s1[i] != 0) && s2[i] != 0)
    {
        ptr[j] = s1[i];
        j++;
        ptr[j] = s2[i];
        i++;
        j++;
    }
    if(len1 < len2)
    {
        while(s2[i] != '\0')
        {
            ptr[j] = s2[i];
            i++;
            j++;
        }
        ptr[j] = '\0';
    }
    else
    {
        while(s1[i] != '\0')
        {
            ptr[j] = s1[i];
            i++;
            j++;
        }
        ptr[j] = '\0';
    }

    return ptr;
}

/*
combine elements one by one to a new string
in the end, check which string has remaining elements that need to be combined to the new string
combine them in the end
*/