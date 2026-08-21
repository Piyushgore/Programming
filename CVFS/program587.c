// fd = file discriptor
// fcntl.h = file control.h
// offset = 0 means static offset (at the start)
// offset = 1 means offset at same position as before
// offset = 2 means offset at end position


#include<stdio.h>
#include<unistd.h>          //only for linux based OS
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 100

int main()
{
    int fd = 0;
    int iRet = 0;
    char Data[BUFFER_SIZE] = {'\0'};

    fd = open("Marvellous.txt",O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        lseek(fd,5,0);

        iRet = read(fd,Data,10);
        printf("%d bytes gets successfully read\n",iRet);

        printf("Data from file is : %s\n",Data);

        close(fd);
    }

    return 0;
}