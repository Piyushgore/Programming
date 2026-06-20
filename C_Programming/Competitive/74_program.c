// Accept N numbers from user and accept range, Display elements from that range

#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[],int iSize, int iStart, int iEnd)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    
}

int main()
{
    int iLength = 0,iCnt = 0, iValue1 = 0, iValue2 = 0;
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

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    Range(p,iLength,iValue1,iValue2);

    printf("\n");
    
    free(p);

    return 0;
}
