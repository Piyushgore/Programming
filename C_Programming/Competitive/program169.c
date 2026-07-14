// Write a program which accept string from user
// and copy small characters of that string into another string. 

#include <stdio.h>

void StrCpySmall(char *src, char *dest) 
{
    while(*src != '\0') 
    {
        if((*src >= 'a') && (*src <= 'z')) 
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main() 
{
    char arr = "Marvellous multi OS";
    char brr;

    StrCpySmall(arr, brr);

    printf("%s", brr);

    return 0;
}