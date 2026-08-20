#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0x1;
    UINT iPos = 0;
    int iNo = 0;

    printf("Enter number : ");
    scanf("%d",&iNo);

    printf("Enter the bit position : ");
    scanf("%d",&iPos);
    
    iMask = iMask << (iPos - 1);

    iNo = iMask ^ iNo;

    printf("Updated number : %d\n",iNo);

    return 0;
}
//  0000 0000 0000 0000 0000 0000 0000 0000  --> Binary
//  0000 1000 0000 0000 0000 0000 0000 0000  --> Binary
//    0    8    0    0    0    0    0    0   --> HEX 