//Write a program which accept number from user and if number is less than 50 then print small, if it greater than 50 and less than 100 then print medium, if it is greater than 100 then print large.

#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("small  ");
    }
    else if(50 < iNo && iNo < 100)
    {
        printf("medium  ");
    }
    else 
    {
        printf("large  ");
    }
    
}

int main()
{
    int iValue = 0;

    printf("enter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    printf("\n");

    return 0;
}

// Time Complexity : O(N)
// Where N > 0