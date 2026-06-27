// Accept N numbers from user and display all such numbers which contains 3 digits in it.


#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength) {
    int i, num, temp, count;
    for(i = 0; i < iLength; i++) {
        num = Arr[i];
        if(num < 0) num = -num;
        count = 0;
        temp = num;
        while(temp != 0) {
            temp = temp / 10;
            count++;
        }
        if(count == 3) {
            printf("%d ", Arr[i]);
        }
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
    Digits(p, iSize);
    printf("\n");

    free(p);
    return 0;
}
