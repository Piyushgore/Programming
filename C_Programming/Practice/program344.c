#include<stdio.h>

typedef unsigned int UINT;

// Position 9 & 17
int main()
{
    UINT iMask = 0x00010100;
    UINT iNo = 0,iResult = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;
    printf("Updated number : %d\n",iResult);

    return 0;
}