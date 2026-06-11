// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
    int iCnt = 0, iSumEven = 0, iSumOdd = 0, iDiff = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    iDiff = iSumEven - iSumOdd;

    return iDiff;
}

int main()
{
    int iLength = 0,iRet = 0,iCnt = 0;
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

    printf("Result is %d\n",iRet);

    free(p);

    return 0;
}
