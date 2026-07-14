// Write a program which accept string from user and accept one character.
// Return index of last occurence of that character

#include<stdio.h>

int LastChar(char *str,char ch)
{
    int iCount = 0;
    char *ptr = str;
    
    while(*ptr != '\0')
    {
        ptr++;
    }
    while(ptr >= str)
    {
        if(*ptr == ch)
        {
            return (ptr - str)+1;
        }
        ptr--;
    }
    return -1;
}
int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Character location is :    %d\n",iRet);

    return 0;
}