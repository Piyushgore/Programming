// Write a program which accept range from user and display all even numbers in between that range

#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
    int iNum = iStart;

    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }

    for(int iCnt = 0;iNum != (iEnd + 1);iCnt++)
    {
        if(iNum >= iStart && iNum <= iEnd)
        {
            if((iNum % 2) == 0)
            {
                printf("%d\t",iNum);
            }
            iNum++;
        } 
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    printf("\n");

    return 0;
}

// Time Complexity : O(N)
// Where N > 0;
