#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x10000;
    UINT iAns = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Seventeenth bit is ON\n");
    }
    else
    {
        printf("Seventeenth bit is OFF\n");
    }

    return 0;
}