#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iPos)
{
    UINT iMask = 0x1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iMask ^ iNo;

    return iResult;
}

int main()
{

    UINT iLocation = 0,iRet = 0,iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter the bit position : ");
    scanf("%d",&iLocation);

    iRet = ToggleBit(iValue,iLocation);
    printf("Updated number : %d\n",iRet);

    return 0;
}