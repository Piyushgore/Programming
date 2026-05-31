// Write a program which accept radius of circle from user and calculate its area.

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double Area = 0.0;

    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }

    Area = PI * fRadius * fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("The area of circle is %lf\n",dRet);

    return 0;
}

// Time Complexity : O(N)
// Where N >= 0;