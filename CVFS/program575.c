// fd = file discriptor
// fcntl.h = file control.h

#include<stdio.h>
#include<unistd.h>          //only for linux based OS
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets successfully opened! with fd : %d\n",fd);
        close(fd);
    }

    return 0;
}