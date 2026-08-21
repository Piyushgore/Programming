// fd = file discriptor
// fcntl.h = file control.h

#include<stdio.h>
#include<unistd.h>          //only for linux based OS
#include<fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;

    fd = open("Marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets successfully opened! with fd : %d\n",fd);

        iRet = write(fd,"Jay Ganesh...",13);
        printf("Number of bytes successfully written = %d\n",iRet);

        close(fd);
    }

    return 0;
}