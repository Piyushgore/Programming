// Write a program which accept one number , two positions from user
// and check whether bit at first or bit at second position is ON or OFF.

#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo, int iPos1, int iPos2) {
    UINT iMask1 = 1 << (iPos1 - 1);
    UINT iMask2 = 1 << (iPos2 - 1);
    UINT iResult1 = iNo & iMask1;
    UINT iResult2 = iNo & iMask2;
    return (iResult1 != 0) || (iResult2 != 0);
}

int main() {
    UINT num;
    int pos1, pos2;
    printf("Enter number: ");
    scanf("%u", &num);
    printf("Enter first position: ");
    scanf("%d", &pos1);
    printf("Enter second position: ");
    scanf("%d", &pos2);
    if (ChkBit(num, pos1, pos2)) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }
    return 0;
}