#include "my_stringLibrary.h"
/**
 * Returns a new string consisting of the characters in s repeated x times, with the character sep in between
 */
char * repeat(char * s, int x, char sep)
{
    int len = myStrlen(s);
    int stringLength = (len + 1) * x;

    char * ptr = (char*)malloc(stringLength + 1);

    int j = 0;
    for(int i = 0; i < x; i++)
    {
        int index = 0;
        while(s[index] != '\0')
        {
            ptr[j] = s[index];
            j++;
            index++;
        }
        ptr[j] = sep;
        j++;
    }
    ptr[j-1] = '\0';    //remove last sep char
    return ptr;
}

/*
for loop x amount of times
to a new string, copy the characters of string s, followed by the sep char
instead of doing ptr[j] = '\0', make '\0' at ptr[j-1] to remove last sep char
*/