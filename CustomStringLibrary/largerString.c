#include "my_stringLibrary.h"

/**
 * -1 if s1 is larger
 * 1 if s2 is larger
 * otherwise 0
 */
int largerString(char * s1, char * s2)
{
    if(s1[0] < s2[0])
    {
        return -1;
    }
    if(s1[0] > s2[0])
    {
        return 1;
    }

    int len1 = myStrlen(s1);
    int len2 = myStrlen(s2);

    int i = 0;
    while(s1[i] != '\0')
    {
        if(len1<len2)
        {
            if(s1[i] < s2[i])
            {
                return -1;
            }
            if(s1[i] > s2[i])
            {
                return 1;
            }
        }
        else if(len1>len2)
        {
            if(s1[i] < s2[i])
            {
                return -1;
            }
            if(s1[i] > s2[i])
            {
                return 1;
            }
        }
        else    //len1==len2
        {
            if(s1[i] < s2[i])
            {
                return -1;
            }
            if(s1[i] > s2[i])
            {
                return 1;
            }
        }
        i++;
    }
    if(len1<len2)
    {
        return -1;
    }
    else if(len1>len2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*
compare first letters, if s1 is smaller return -1/ if s2 is smaller return 1
compare lengths to stop iteratating once smaller string reaches \0 first (does not matter if lengths s1==s2)
if s1[i] is smaller, return -1/ if s2[i] is smaller return 1
if exited while loop, return -1 if s1 has smaller length, 1 if s2 has smaller, 0 if same
*/