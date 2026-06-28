// Input : iRow = 6
//         iCol = 6
//
// Output : 
//          1   2   3   4
//              2   3   4
//                  3   4
//                      4

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0,inum = 0;

    for(i = iRow;i >= 1;i--)
    {
        for(j = iCol,inum = 1;j >= 1;inum++,j--)
        {
            if(i < j)
            {
                printf(" \t");
            }
            else
            {
                printf("%d\t",inum);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}