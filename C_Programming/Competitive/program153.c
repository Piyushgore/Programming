// Write a program which accept string from user and return difference between
// frequency of small characters and frequency of capital characters.

#include<stdio.h>

int Difference(char *str)
{
    int iCntSmall = 0,iCnt = 0,iCntBig = 0;

    //Filter
    if(*str == '\0')
    {
        printf("Enter valid string!");
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCntSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCntBig++;
        }
        str++;
    }

    iCnt = iCntSmall - iCntBig;

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("%d\n",iRet);

    return 0;
}