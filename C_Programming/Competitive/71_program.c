// Accept N numbers from user and accept one anothe number as NO, Check whether NO is present or not

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Frequency(int Arr[],int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iLength = 0,iCnt = 0,bRet = 0, iValue = 0;
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

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = Frequency(p,iLength,iValue);

    if(bRet == TRUE)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is absent\n");
    }
    
    free(p);

    return 0;
}
