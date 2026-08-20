// 5678  --> Input
// 8    7   6   5 -->Output


#include<stdio.h>

int Summation(int iNo)
{
    int iDigit = 0;
    static int iSum = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        Summation(iNo);
        iSum = iSum * iDigit;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("Multiplication is : %d\n",iRet);

    return 0;
}