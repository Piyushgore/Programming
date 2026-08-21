// fd = file discriptor
// fcntl.h = file control.h
// offset = 0 means static offset (at the start) -->stdin
// offset = 1 means offset at same position as before -->stdout
// offset = 2 means offset at end position --> stdout but to show error (stderr)


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CalculateFileSize(char FileName[])
{
    int fd = 0,iRet = 0,iSize = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return iSize;
    }

    while((iRet =  read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        iSize = iSize + iRet;
    }

    close(fd);

    return iSize;
}

int main()
{
    char Fname[30] = {'\0'};
    int iRet = 0;

    printf("Enter the file name :- \n");
    scanf("%[^'\n']",Fname);

    iRet = CalculateFileSize(Fname);
    printf("File size is : %d bytes\n",iRet);

    return 0;
}