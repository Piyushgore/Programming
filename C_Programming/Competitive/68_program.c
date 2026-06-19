// Accept N numbers from user and check whether that number contains 11 in it or not

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iSize)
{
    int iCnt = 0;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
    }

    return FALSE;
}

int main()
{
    int iLength = 0,iCnt = 0,bRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("Memory Allocation failed\n");
        return -1;
    }
    
    printf("Enter %d elements : \n",iLength);

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iLength);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}
