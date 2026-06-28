// Accept character from user and check whether it is special symbol
// or not(!,@,#,$,%,^,&,*)
// Accept Character from user and check whether it is small or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch >= 97 && ch <= 122)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is small character\n");
    }
    else
    {
        printf("It is not small character\n");
    }

    return 0;
}