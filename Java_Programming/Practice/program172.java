// Input : 5
// Output : 1   2   3   4   5

import java.util.*;

class program172
{
    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1;iCnt <= iNo;iCnt++)
        {
            System.out.print(iCnt+"\t");
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