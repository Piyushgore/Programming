// Accept N numbers from user and accept one anothe number as NO, return index of last occurence of that NO

#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int Arr[],int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = (iSize - 1);iCnt > 0;iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
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

    iRet = FirstOcc(p,iLength,iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("The first occurence of number is %d\n",iRet);
    }
    
    free(p);

    return 0;
}
