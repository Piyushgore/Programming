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

// Change in parameter
void DisplayFile(char *FileName)
{
    int fd = 0,iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }

    while((iRet =  read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        write(1,Buffer,iRet);
        memset(Buffer,'\0',sizeof(Buffer));
    }

    close(fd);

}

int main()
{
    char Fname[30] = {'\0'};

    printf("Enter the file name :- \n");
    scanf("%[^'\n']",Fname);

    DisplayFile(Fname);

    return 0;
}