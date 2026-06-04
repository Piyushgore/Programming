/*
    START
        Accept number as No
        If No is completely divisible by 2 
            then print even
        Otherwise
            print odd
    STOP

    START
        Accept number as NO
        Divide No by 2
        If remainder is 0
            then print as even
        Otherwise 
            print as odd
    STOP
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRemainder = iValue %2;

    if(iRemainder == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
    return 0;
}
