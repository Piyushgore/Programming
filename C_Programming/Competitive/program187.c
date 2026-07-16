// Write a program which accept two numbers from user
// and display position of common ON bits from that two numbers.

#include <stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2) 
{
    UINT iCommon = iNo1 & iNo2;
    int iPos = 1;

    printf("Common ON bit positions: ");

    while (iCommon != 0) 
    {
        if (iCommon & 1) 
        {
            printf("%d ", iPos);
        }

        iCommon = iCommon >> 1;
        iPos++;
    }

    printf("\n");
}

int main() {
    UINT iValue1, iValue2;

    printf("Enter first number: ");
    scanf("%u", &iValue1);

    printf("Enter second number: ");
    scanf("%u", &iValue2);

    CommonBits(iValue1,iValue2);

    return 0;
}