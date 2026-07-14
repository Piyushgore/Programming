// Write a program which accept one number from user 
// and toggle contents of first and last nibble of the number. Return modified number

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,int iPos)
{
    UINT iMask = 0xF000000F;
    UINT Ans = 0;

    Ans = iMask ^ iNo;

    return Ans;    
}

int main()
{
    UINT iValue = 0,iRet = 0;
    int iPos = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter position : ");
    scanf("%d",&iPos);

    iRet = ToggleBit(iValue,iPos);
    printf("%d\n",iRet);

    return 0;
}