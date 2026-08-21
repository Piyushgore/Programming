// fd = file discriptor
// fcntl.h = file control.h

#include<stdio.h>
#include<unistd.h>          //only for linux based OS
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Data[100] = {'\0'};
    char DataX[100] = {'\0'};

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

        iRet = read(fd,DataX,3);
        printf("Number of bytes successfully read = %d\n",iRet);

        printf("data from file is : %s\n",DataX);

        close(fd);
    }

    return 0;
}