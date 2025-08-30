#include "my_stringLibrary.h"

/**
 * Returns index of first occurence of n in string h or -1 if not found;
 */
int find(char * h, char * n)
{
    int i = 0;
    int j = 0;
    int count = 0;
    int trueOrFalse = 1;
    int startOfSecondString = 0;
    int lenOfFinding = myStrlen(n);

    while(h[i] != '\0')
    {
        if(n[j] == h[i])
        {
            if(trueOrFalse)
            {
                startOfSecondString = i;
                trueOrFalse = 0;
            }
            j++;
            count++;
        }
        else
        {
            trueOrFalse = 1;
            j = 0;
            startOfSecondString = 0;
            count = 0;
        }
        if(count == lenOfFinding)
        {
            return startOfSecondString;
        }
        i++;
    }
    return -1;
    //return (count == lenOfFinding ? startOfSecondString:-1);
}

/*
iterate through the h string
if there is a matching character for the h string and n string
    if true
            save index
            make the nested if to false so that we do not rewrite the saved index accidentally
    increment iterator for n string and increment counter
keep incrementing h string
if there is NOT a matching character for the h string and n string
    make our nested if from false back to true so that we can rewrite saved index
    reset counter, reset n string iterator 
*/