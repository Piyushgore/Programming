// Write a program which 2 strings from user 
// and concat second string after first string.

#include <stdio.h>

void StrCatX(char *dest, char *src) 
{
    while(*dest != '\0') 
    {
        dest++;
    }

    while(*src != '\0') 
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() 
{
    char arr = "Marvellous Infosystems";
    char brr = "Logic Building";

    StrCatX(arr, brr);
    
    printf("%s", arr);
    
    return 0;
}