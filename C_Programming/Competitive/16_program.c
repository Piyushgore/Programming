//Write a program which accept number from user and display its multiplication of factors

#include<stdio.h>

int MultiFac(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;
    iMulti = 1;

    for(iCnt = 1;iCnt <= (iNo / 2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMulti = iMulti * iCnt; 
            
        }
    }
    return iMulti;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultiFac(iValue);

    printf("%d",iRet);
    
    return 0;
}

//Time Complexity : O(N / 2)
// Where N >= 1