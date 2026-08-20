// 4  --> Input
// 1 * 2 * 3 * 4 = 24 -->Output

// 7 --> Input
// 1 * 2 * 3 * 4  * 5 = 120 -->Output

#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    ULONG iMult = 1;

    while(iNo != 0)
    {
        iMult = iMult * iNo;
        iNo--;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter Element : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial is : %lu\n",iRet);

    return 0;
}