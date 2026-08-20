#include<stdio.h>

int main()
{
    int iNo = 0,iCount = 0,iDigit = 0,i = 0,iRev = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        iCount = iCount + iDigit;
        iCount = iCount * 10;
        iNo = iNo / 2;
    }
    for(i = iCount;iCount != 0;i--)
    {
        iRev = iCount;
        iRev = iRev * 10;
        iCount = iCount / 10;
    }

    printf("The number in binary is %d\n",iRev);

    return 0;
}