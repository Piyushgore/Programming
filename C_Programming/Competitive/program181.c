// Write a program which accept one number and position from user 
// check whether bit at that position is on or off.
// If bit is one return TRUE otherwise return FALSE

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo,int iPos)
{
    UINT iMask = (1 << (iPos - 1));
    UINT Ans = 0;

    Ans = iMask & iNo;

    if(Ans == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    int iPos = 0;
    BOOL bRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter position : ");
    scanf("%d",&iPos);

    bRet = ChkBit(iValue,iPos);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}