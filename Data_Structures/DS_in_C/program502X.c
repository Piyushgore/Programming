#include<stdio.h>

static int j = 0;

void Display()
{
    int i = 0;
    j++;
    
    if(j <= 4)
    {
        printf("Jay Ganesh...\n");
    }
    else
    {
        return;
    }
    
    Display();
    
}

int main()
{
    Display();

    return 0;
}