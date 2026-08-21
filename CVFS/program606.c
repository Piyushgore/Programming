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

int CountCapital(char *FileName)
{
    int fd = 0,iRet = 0,iCount = 0,i = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet =  read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0;i <= iRet;i++)
        {
            if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
            {
                iCount++;
            }
            
            
        }
        memset(Buffer,'\0',sizeof(Buffer));
    }

    close(fd);

    return iCount;

}

int main()
{
    char Fname[30] = {'\0'};
    int iRet = 0;

    printf("Enter the file name :- \n");
    scanf("%[^'\n']",Fname);

    iRet = CountCapital(Fname);
    printf("Number of Capital letters found : %d\n",iRet);

    return 0;
}