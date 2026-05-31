// Write a program which accept number from user and return the count of even digits

#include<stdio.h>

int CountEven(int iNo)
{

    int iCnt = 0;
    int iCount = 0;
    for(iCnt = iNo;iCnt >= 1;iCnt--)
    {
        iCnt = iNo % 10;
        if((iCnt % 2) == 0)
        {
            iCount++; 
        }
        iCnt = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d\n",iRet);

    return 0;
}