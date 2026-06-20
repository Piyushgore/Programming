// Accept N numbers from user and accept one anothe number as NO , return frequency of NO from it

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength = 0,iCnt = 0,iRet = 0, iValue = 0;
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

    iRet = Frequency(p,iLength,iValue);

    printf("Result is %d\n",iRet);

    free(p);

    return 0;
}
