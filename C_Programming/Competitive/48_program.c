// Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 meter)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = 1000;

    iMeter = iNo * iMeter;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("The conversion from KM to Meter is : %d",iRet);

    return 0;
}

// Time Complexity : O(N)
// Where N >= 0;
