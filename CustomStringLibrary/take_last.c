#include "my_stringLibrary.h"

/**
 * Modifies string so it only consits of last n characters
 */
void take_last(char * s, int n)
{
    int len = myStrlen(s);
    int index = len - n;
    if(index > 0)
    {
        remakeString(s, index);
    }
}

/*
find the index from where you want to save string
call remakeString
*/