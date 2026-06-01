// Write a program which accept number from user and return multiplication of all digits.

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    int iMult = 1;

    for(int iCnt = 0;iNo != 0;iCnt++)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10; 
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d\n",iRet);

    return 0;
}

// Time Complexity : O(N)
// Where N >= 1;
