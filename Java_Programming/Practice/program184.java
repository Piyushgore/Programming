// Input : 7
// Output : A   *   B   *   C   *   D

import java.util.*;

class program184
{
    public static void Display(int iNo)
    {
        char ch = '\0';
        int iCnt = 0;

        for(iCnt = 1,ch = 'A';iCnt <= iNo;iCnt++)
        {   
            if(iCnt % 2 == 0)
            {
                System.out.print("\t*\t");
            }
            else
            {
                System.out.print(ch);
                ch++;
            }
        }
        System.out.println();
    }

    public static void main(String A[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}