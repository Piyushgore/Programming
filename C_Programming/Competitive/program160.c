// Write a program which accept string from user and count number of white spaces

#include<stdio.h>
int CountWhite(char *str)
{
    int i = 0,iCount = 0;
    
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] == ' ')
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);
    printf("%d\n",iRet);


    return 0;
}