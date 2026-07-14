// Write a program which accept one number from user and on its first 4 bits
// Return modified number.

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iAns = 0;
    UINT iMask = 0xF;

    iAns = iNo | iMask;

    return iAns;
}

int main()
{
    UINT iValue = 0,iRet = 0;;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);
    printf("%d\n",iRet);

    return 0;
}