// Write a program which display ASCII table. Table contains symbol,
// Decimal, Hexadecimal and Octal representation of every member from 0 to 255

#include<stdio.h>

void Display(char ch)
{
    int iDec = 0;
    unsigned int iNo = 0;
    
    printf("Decimal : %d\n",ch);
    printf("Octal : 0%o\n",ch);
    printf("Hexadecimal : 0x%x\n",ch);

    
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}