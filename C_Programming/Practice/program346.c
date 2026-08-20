#include<stdio.h>

typedef unsigned int UINT;

// Position 21 & 27
int main()
{
    UINT iMask = 0x04100000;
    UINT iNo = 0,iResult = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;
    printf("Updated number : %d\n",iResult);

    return 0;
}