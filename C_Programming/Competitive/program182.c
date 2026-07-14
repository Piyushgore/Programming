// Write a program which accept one number and position from user 
// and off that bit. Return modified number

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo,int iPos)
{
    UINT iMask = (1 << (iPos - 1));
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

    iRet = OffBit(iValue,iPos);
    printf("%d\n",iRet);

    return 0;
}