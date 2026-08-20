// 4  --> Input
// 1 * 2 * 3 * 4 = 24 -->Output

// 7 --> Input
// 1 * 2 * 3 * 4  * 5 = 120 -->Output

#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    static ULONG iMult = 1;

    if(iNo > 0)
    {
        iMult = iMult * iNo;
        iNo--;
        Factorial(iNo);
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