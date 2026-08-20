#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;
    
    if(i <= iNo)
    {
        printf("Jay Ganesh... %d\n",i);
        i++;
        Display(iNo);
    }
    else
    {
        return;
    }
    
}

int main()
{
    Display(7);

    return 0;
}