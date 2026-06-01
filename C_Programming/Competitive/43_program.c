// write a program which accept number from user and return the count of digits in between 3 & 7-9

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    for(int iCnt = 0;iNo != 0;iCnt++)
    {
        iDigit = iNo % 10;
        if(iDigit >= 3 && iDigit <= 7)
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

    iRet = CountRange(iValue);

    printf("%d\n",iRet);

    return 0;
}

// Time Complexity : O(N)
// Where N >= 3 && N <= 7;
