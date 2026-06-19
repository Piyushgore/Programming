// Accept N numbers from user and return difference between frequency of even and odd numbers

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)
{
    int iCnt = 0, iCountEven = 0, iCountOdd = 0,iDiff = 0;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(((Arr[iCnt] % 2) == 0))
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    iDiff = iCountEven - iCountOdd;
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

    iRet = CountEven(p,iLength);

    printf("Result is %d\n",iRet);

    free(p);

    return 0;
}
