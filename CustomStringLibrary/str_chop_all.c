#include "my_stringLibrary.h"

/**
 * Returns an array of string consisting of the characters in s split into tokens based on the delimeter c,
 * followed by a NULL pointer
 */
char ** str_chop_all(char * s, char c)
{
    int i = 0;
    int count = 0;

    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            count++;
        }
        i++;
    }

    char ** strings = (char**)malloc(sizeof(char*) * (count + 2));

    i = 0;
    int index = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            char * str = isolateString(s, i);
            if(!is_empty(str))
            {
                int whitespace = number_of_left_space(str);
                rm_left_space(str);
                strings[index] = str;
                index++;
                take_last(s, myStrlen(s) - (myStrlen(str) + whitespace + 1));//len of str is affected by rm_left_space
                i = 0;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    rm_left_space(s);
    strings[index] = s;
    strings[index + 1] = '\0';
    return strings;
}

/*
count how many char c we have, so we can malloc (char*) * (count+2)
then do another while loop from the beginning
if s[i] == char c, isolate the string left of the char c
add this string to the array of strings
use take_last function to make the string s smaller -> it will now only have characters after the previous char c
reset iterator
make array of strings' last 2 elements the remainig word after char c, and NULL 
*/