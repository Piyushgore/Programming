//Write a program which accepts one number from user and prints that number of even numbers on screen
#include <stdio.h>
void PrintEven(int iNo) {
    int i = 1;
    int evenNum = 2;

    if (iNo <= 0) 
    {
        iNo = -iNo;
    }

    // Loop iNo times to print the first iNo even numbers
    for (i = 0; i < iNo; i++) {
        printf("%d ",evenNum);
        evenNum += 2;
    }
}

int main() {
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);
    PrintEven(iValue);
    return 0;
}