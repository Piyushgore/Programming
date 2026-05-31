// Accept amount in US dollar and return its corresponding value in Indian currency.
// Consider 1 dollar as 70 rupees

#include<stdio.h>

int DollarToINR(int iNo)
{
    int INR = 0;
    INR = 70;
    int rupees = 0;

    rupees = iNo * INR;

    return rupees;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is %d",iRet);
    printf("\n");

    return 0;
}

// Time Complexity : O(N)
// Where N >= 1