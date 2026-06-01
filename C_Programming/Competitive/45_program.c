// Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

#include<stdio.h>

int CountDiff(int iNo)
{

    int iCnt = 0;
    int iCopy = iNo;
    int iDigit = 0;
    int iCountOdd = 0;
    int iCountEven = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 0;iNo != 0;iCnt++)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iCountOdd = iCountOdd + iDigit; 
        }
        iNo = iNo / 10;
    }

    for(iCnt = 0;iCopy != 0;iCnt++)
    {
        iDigit = iCopy % 10;
        if((iDigit % 2) == 0 )
        {
            iCountEven = iCountEven + iDigit; 
        }
        iCopy = iCopy / 10;
    }
    
    iDiff = iCountEven - iCountOdd;

    return iDiff;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d\n",iRet);

    return 0;
}

// Time Complexity : O(N)
// Where N >= 0
