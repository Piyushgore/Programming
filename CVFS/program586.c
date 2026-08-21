// fd = file discriptor
// fcntl.h = file control.h

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
        printf("File gets successfully opened! with fd : %d\n",fd);

        iRet = read(fd,Data,13);
        printf("Number of bytes successfully read = %d\n",iRet);

        printf("data from file is : %s\n",Data);

        /////// ISSUE Solved
        memset(Data,'\0',sizeof(Data));

        iRet = read(fd,Data,3);
        printf("Number of bytes successfully read = %d\n",iRet);

        printf("data from file is : %s\n",Data);

        close(fd);
    }

    return 0;
}