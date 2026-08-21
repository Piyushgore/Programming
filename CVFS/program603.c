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

void FileCopy(char FileNameSrc[],char FileNameDest[])
{
    int fdSrc = 0,fdDest = 0,iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fdSrc = open(FileNameSrc,O_RDONLY);

    if(fdSrc == -1)
    {
        printf("Unable to open source file\n");
        return;
    }

    fdDest = creat(FileNameDest,0777);

    if(fdDest == -1)
    {
        printf("Unable to create destination file\n");
    }

    while((iRet =  read(fdSrc,Buffer,sizeof(Buffer))) != 0)
    {
        write(fdDest,Buffer,iRet);
        memset(Buffer,'\0',sizeof(Buffer));
    }

    close(fdSrc);
    close(fdDest);
}

int main()
{
    char FnameSrc[30] = {'\0'};
    char FnameDest[30] = {'\0'};

    printf("Enter the source file name :- \n");
    scanf("%[^'\n']",FnameSrc);

    printf("Enter the destination file name :- \n");
    scanf("%[^'\n']",FnameDest);                        // ISSUE

    FileCopy(FnameSrc,FnameDest);

    return 0;
}