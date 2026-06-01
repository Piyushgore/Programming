// Write a program which accept temperature in Fahrenheit and convert it into celsius.

#include<stdio.h>

double Fhtocs(float fTemp)
{
    double celsius = 0.0;
    celsius = (fTemp - 32) * (5.0/9.0);
    return celsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit");
    scanf("%f",&fValue);

    dRet = Fhtocs(fValue);

    printf("The temperature in celsius is : %lf\n",dRet);

    return 0;
}

// Time Complexity : O(N)
// Where N >= 0;
