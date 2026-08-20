#include<stdio.h>

int main()
{
    char *str = "Ganesh";       // char str[] = {"Ganesh"};   (both are same)

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;
    
    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    return 0;
}