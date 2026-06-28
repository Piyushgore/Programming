// Input : 5
// Output : A   B   C   D   E


#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    char ch = '\0';

    for(i = 0,ch = 'A';i < iNo;i++,ch++)
    {
        printf("%c\t",ch);
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