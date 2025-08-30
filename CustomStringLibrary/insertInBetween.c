#include "my_stringLibrary.h"

/**
 * Insert string at index
 */
char * insertInBetween(char * s, char * insertingStr, int index)
{
    int len1 = myStrlen(s);
    int len2 = myStrlen(insertingStr);

    if(index > len1)
    {
        return '\0';
    }

    char * ptr = (char *)malloc(len1 + len2 + 1);

    int i = 0;
    int stoppedAtIndex = 0;
    while((i < index) && (s[i] != '\0'))
    {
        ptr[i] = s[i];
        i++;
        stoppedAtIndex++;
    }
    int j = 0;
    while(insertingStr[j] != '\0')
    {
        ptr[i] = insertingStr[j];
        i++;
        j++;
    }
    while(s[stoppedAtIndex] != '\0')
    {
        ptr[i] = s[stoppedAtIndex];
        i++;
        stoppedAtIndex++;
    }
    ptr[i] = '\0';
    return ptr;
}

/*
insert a string somehwere inside another string
while loop until you reach the index where you want to insert new string
while loop insert new string until you reach end
continue copying elements of string s
*/