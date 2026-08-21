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
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0,fd = 0;

    fd = open("program592.c",O_RDONLY);

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        printf("%s",Buffer);
        memset(Buffer,'\0',sizeof(Buffer));
    }

    close(fd);

    return 0;
}