#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0xFFFFFFF7;
    int iNo = 0;

    printf("Enter number : ");
    scanf("%d",&iNo);
    
    iNo = iMask & iNo;

    printf("Updated number : %d\n",iNo);

    return 0;
}