#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0xFFFFEFFF;
    UINT iPos = 0;
    int iNo = 0;

    printf("Enter number : ");
    scanf("%d",&iNo);
    
    iNo = iMask & iNo;

    printf("Updated number : %d\n",iNo);

    return 0;
}