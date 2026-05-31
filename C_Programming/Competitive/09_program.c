//Accept two numbers from user and display first number in second number of times
#include<stdio.h>
int Display( int iNo, int iFrequency) {
    int i = 0;
    if(iFrequency < 0) {
        iFrequency = -iFrequency;
    }
    for(i = 0;i < iFrequency; i++) {
        printf("%d\t",iNo);
    }
}

int main() {
    int iValue = 0;
    int iCount = 0;
    printf("Enter number");
    scanf("%d" ,&iValue);
    printf("Enter frequency");
    scanf("%d" ,&iCount);
    Display(iValue, iCount);
    return 0;
}