// Write a program which accept string from user and convert it into upper case

#include<stdio.h>
void struprx(char *str)
{
    int i = 0;
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n]s",arr);

    struprx(arr);

    printf("Modified string is %s\n",arr);

    return 0;
}