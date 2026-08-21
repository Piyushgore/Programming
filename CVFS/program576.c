// fd = file discriptor
// fcntl.h = file control.h

#include<stdio.h>
#include<unistd.h>          //only for linux based OS
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets successfully opened! with fd : %d\n",fd);
        write(fd,"Jay Ganesh...",13);

        close(fd);
    }

    return 0;
}