// Write a program which accept a number from a user and print its number line

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo;iCnt <= iNo;iCnt++)
    {
        printf("%d   ",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    printf("\n");

    return 0;
}


//Time Complexity : O(N)
// Where N > 1