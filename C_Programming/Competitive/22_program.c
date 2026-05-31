// Write a program which accept number form user and and print numbers till that number

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("%d  ",iCnt);
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