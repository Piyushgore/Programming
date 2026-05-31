// Write a program to find even factorial of given number

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iMult = 0;
    iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d\n",iRet);

    return 0;
}

// Time Complexity : O(N)
// Where N >= 1