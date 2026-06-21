// Accept N numbers from user and return the difference between largest and smallest number

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
    int iCnt = 0, iDiff = 0, iMin = 0, iMax = 0;
    iMin = Arr[0];
    iMax = Arr[0];
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    iDiff = iMax - iMin;

    return iDiff;
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

    iRet = Difference(p,iLength);

    printf("The Difference is %d\n",iRet);

    free(p);

    return 0;
}
