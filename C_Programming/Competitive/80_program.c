// Accept N numbers from user and display summation of digits of each number.

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength) {
    int i, num, sum, temp, rem;
    for(i = 0; i < iLength; i++) {
        num = Arr[i];
        if(num < 0) num = -num;
        sum = 0;
        temp = num;
        while(temp != 0) {
            rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }
        printf("%d ", sum);
    }
}

int main() {
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL) {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements ", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        printf("Enter element : %d", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("\n");
    DigitsSum(p, iSize);
    printf("\n");

    free(p);
    return 0;
}
