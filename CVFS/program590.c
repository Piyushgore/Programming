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
    unlink("Marvellous.txt");

    return 0;
}