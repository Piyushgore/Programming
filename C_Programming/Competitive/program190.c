// Write a program which accept one number from user
// and range of positions from user. Toggle all bits from that range. 

#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd) 
{
    UINT iMask = 0;
    UINT iResult;
    int iCnt;
    
    for (iCnt = iStart; iCnt <= iEnd; iCnt++) 
    {
        iMask = iMask | (1 << (iCnt - 1));
    }
    
    iResult = iNo ^ iMask;

    return iResult;
}

int main() 
{
    UINT iValue, iRet;
    int iStart, iEnd;

    printf("Enter number: ");
    scanf("%u", &iValue);

    printf("Enter start position: ");
    scanf("%d", &iStart);

    printf("Enter end position: ");
    scanf("%d", &iEnd);

    iRet = ToggleBitRange(iValue, iStart, iEnd);

    printf("Modified number: %u\n", iRet);

    return 0;
}