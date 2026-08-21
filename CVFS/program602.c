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

void DisplayFileInformation(char FileName[])
{
    struct stat sobj;

    stat(FileName,&sobj);

    printf("File Name : %s\n",FileName);
    printf("Inode number : %lu\n",sobj.st_ino);
    printf("File size is : %ld\n",sobj.st_size);
}

int main()
{
    char Fname[30] = {'\0'};
    int iRet = 0;

    printf("Enter the file name :- \n");
    scanf("%[^'\n']",Fname);

    DisplayFileInformation(Fname);

    return 0;
}