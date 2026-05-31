// Write a program to find factorial of given number

#include<stdio.h>

int Factorial(int iNo)
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
        iMult = iMult * iCnt;        
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("\n");
    printf("%d",iRet);

    return 0;
}

// Time Complexity : O(N)
// Where N >= 1