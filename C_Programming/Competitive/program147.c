// Accept character from user. If it is capital then display 
// all the characters till Z. If input character is small then 
// print all the characters in the reverse order till a. 
// In other cases return directly

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        while(ch <= 'Z')
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }
    else
    {
        while(ch >= 'a')
        {
            printf("%c\t",ch);
            ch--;
        }
        printf("\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}