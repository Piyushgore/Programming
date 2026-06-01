// Write a program which accept number from user and return the count of odd digits

#include<stdio.h>

int CountOdd(int iNo)
{

    int iCnt = 0;
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 0;iNo != 0;iCnt++)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iCount++; 
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d\n",iRet);

    return 0;
}

// Time Complexity : O(N)
// Where N >= 1;
