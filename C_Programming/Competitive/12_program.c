//Write a program which accepts number from user and print even factors of that number
#include <stdio.h>

void DisplayFactor(int iNo) {
    int i = 0;
    if (iNo <= 0) {
        iNo = -iNo;
    }

    // Loop from 1 to iNo
    for (i = 1; i <= iNo; i++) {
        // Check if i is a factor AND i is even
        if ((iNo % i == 0) && (i % 2 == 0)) {
            printf("%d ", i);
        }
    }
}

int main() {
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);
    DisplayFactor(iValue);
    return 0;
}