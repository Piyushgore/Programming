// Write a program which accept area in square feet and convert it into square meter

#include<stdio.h>

double SquareMeter(int iValue)
{
    float SqFeet = 0.0;
    float SqMeter = 0.0;
    SqMeter = 0.0929;

    SqFeet = SqMeter * iValue;

    return SqFeet;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("enter area in square feet");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is : %lf\n",dRet);

    return 0;
}

// Time Complexity : O(N)
// Where N >= 0;
