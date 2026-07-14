// Write a program which checks whether 7th & 15th & 21st & 28th bit is ON or OFF

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
    UINT iMask  = 0x814040;
    UINT iAns = 0;

    iAns = iNo & iMask;

    if(iAns == iMask)
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
    UINT iValue;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);
    
    if(bRet == TRUE)
    {
        printf("7th & 15th & 21st & 28th bit is ON\n");
    }
    else
    {
        printf("7th & 15th & 21st & 28th bit is OFF\n");
    }

    return 0;
}