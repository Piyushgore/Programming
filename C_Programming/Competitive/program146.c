// Write a program which display ASCII table. Table contains symbol,
// Decimal, Hexadecimal and Octal representation of every member from 0 to 255

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0,iDec = 0;
    char ch = '\0';
    unsigned int iNo = 0;
    for(iCnt = 0,iNo = 1,iDec = 0,ch = '\0';iCnt <= 255;iNo++,ch++,iCnt++,iDec++)
    {
        printf("%d\t%x\t%c\n",iDec,iNo,ch);
    }
}

int main()
{
    printf("Dec\tHex\tChar\n");
    DisplayASCII();

    return 0;
}