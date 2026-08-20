#include<stdio.h>

void Display()
{
    static int i = 0;
    
    i = 1;              // ISSUE
    if(i <= 4)
    {
        printf("Jay Ganesh...\n");
        i++;
        Display();
    }
    else
    {
        return;
    }
    
}

int main()
{
    Display();

    return 0;
}