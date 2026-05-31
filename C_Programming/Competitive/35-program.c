// Write a program which returns diffrence between even factorial and odd factorial of given number

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iOdd = 0;
    int iEven = 0;
    int iDiff = 0;
    iOdd = 1;
    iEven = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iOdd = iOdd * iCnt;
        }
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEven = iEven * iCnt;
        }
    }
    iDiff = iEven - iOdd;
    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n",iRet);

    return 0;
}

// Time Complexity : O(N)
// Where N >= 1