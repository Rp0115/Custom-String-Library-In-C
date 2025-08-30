#include "my_stringLibrary.h"

/**
 * String concatenation
 */
char * myStrcat(char * s1, char * s2)
{
    int len1 = myStrlen(s1);
    int len2 = myStrlen(s2);

    char * ptr = (char *)malloc(len1 + len2 + 1);

    int i = 0;
    while(s1[i] != '\0')
    {
        ptr[i] = s1[i];
        i++;
    }
    int j = 0;
    while(s2[j] != '\0')
    {
        ptr[i] = s2[j];
        i++;
        j++;
    }
    ptr[i] = '\0';
    return ptr;
}