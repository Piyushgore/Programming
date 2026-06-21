// Accept N numbers from user and return the largest number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iCnt = 0, iMax = 0;
    iMax = Arr[0];
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iLength = 0,iCnt = 0,iRet = 0;
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

    iRet = Maximum(p,iLength);

    printf("The Largest number is %d\n",iRet);

    free(p);

    return 0;
}
