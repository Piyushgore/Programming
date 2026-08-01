#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[],int iSize)
{
    int iCnt = 0, iNum = 11;
    bool bFLAG = false;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNum)
        {
            bFLAG = true;
            break;
        }
    }

    return bFLAG;
}

int main()
{
    int iLength = 0;
    int *Brr = NULL, iCnt = 0;
    bool bRet = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    bRet = LinearSearch(Brr,iLength);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    free(Brr);

    return 0;
}
