#include "my_stringLibrary.h"

/**
 * Returns 1 if all letters in the string are of same type (uppercase or lowercase)
 * Else 0
 */
int all_letters(char * s)
{
    //capital letters
    if(is_uppercase(s[0]))
    {
        int i = 1;
        while(s[i] != '\0')
        {
            if(is_lowercase(s[i]))
            {
                return 0;
            }
            i++;
        }
        return 1;
    }
    //lowercase letters
    else if(is_lowercase(s[0]))
    {
        int i = 1;
        while(s[i] != '\0')
        {
            if(is_uppercase(s[i]))
            {
                return 0;
            }
            i++;
        }
        return 1;
    }
    else
    {
        return -1;
    }
}

/*
check if starting char is uppercase. if it is, check if there are any lowercase letters. if there are, return 0, if not, 1
else if starting char is lowercase. if it is, check if there are any uppercase letters, if there are, return 0, if not, 1
return -1 if for whatever reason else and elseif dont work - NULL string
*/