// Write a program which accept one number from user
// and check whether 9th or 12th bit is on or off.

#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo) 
{
    UINT iMask1 = 1 << 8;
    UINT iMask2 = 1 << 11;
    int iRet = 0;

    UINT iResult1 = iNo & iMask1;
    UINT iResult2 = iNo & iMask2;

    iRet = (iResult1 != 0) || (iResult2 != 0);

    return iRet;
}

int main() 
{
    UINT iValue;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = ChkBit(iValue);

    if (iRet) 
    {
        printf("TRUE\n");
    }
    else 
    {
        printf("FALSE\n");
    }

    return 0;
}