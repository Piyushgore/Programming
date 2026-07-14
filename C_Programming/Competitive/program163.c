// Write a program which accept string from user and accept one character.
// Return index of first occurence of that character

#include<stdio.h>

int FirstChar(char *str,char ch)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        iCount++;
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    return iCount;
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

    iRet = FirstChar(arr,cValue);

    printf("Character location is :    %d\n",iRet);

    return 0;
}