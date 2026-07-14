// Write a program which accept string from user and display only digits from the that string

#include<stdio.h>
void DisplayDigits(char *str)
{
    int i = 0;
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c",str[i]);
        }
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    DisplayDigits(arr);
    printf("\n");


    return 0;
}