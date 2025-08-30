#include "my_stringLibrary.h"

int main()
{
    char str[] = "hello world";
    printf("%s\n", str);

    char * ptr = replace("abcCXdCXd", "CX", "CX");
    puts(ptr);
}