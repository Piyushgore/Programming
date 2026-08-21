// fd = file discriptor
// fcntl.h = file control.h
// offset = 0 means static offset (at the start) -->stdin
// offset = 1 means offset at same position as before -->stdout
// offset = 2 means offset at end position --> stdout but to show error (stderr)


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024

int CalculateFileSize(char FileName[])
{
    struct stat sobj;

    stat(FileName,&sobj);

    return sobj.st_size;
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