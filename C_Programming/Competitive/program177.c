// Write a program which accept one number from user and off 7th & 10th bit of that number if it is on.
// Return modified number.

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iAns = 0;
    UINT iMask = 0x240;

    iAns = iNo ^ iMask;

    return iAns;
}

int main()
{
    UINT iValue = 0,iRet = 0;;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);
    printf("%d\n",iRet);

    return 0;
}