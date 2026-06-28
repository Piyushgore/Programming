// Input : 5
// Output : 1   #   2   #   3   #   4   #   5   #


#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0,iCount = 0;

    for(i = 0,iCount = 1;i < iNo;i++,iCount++)
    {
        printf("%d\t#\t",iCount);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}