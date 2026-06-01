// Write a number which accept range from user and return addition of all even numbers in between that range


#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
    int iNum = iStart;
    int iSum = 0;

    if(iStart < 0)
    {
        printf("Invalid Range\n");
    }
    else
    {
        for(int iCnt = 0;iNum != (iEnd + 1);iCnt++)
        {
            if(iNum >= iStart && iNum <= iEnd)
            {
                if((iNum % 2) == 0)
                {
                    iSum = iSum + iNum; 
                }
                iNum++;
            } 
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    if(iRet == 0)
    {
        return 1;
    }
    else
    {
        printf("Addition is %d\n",iRet);
    }

    return 0;
}

// Time Complexity : O(N)
// Where N > 0;
