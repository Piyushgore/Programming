// Input : 7
// Output : a   b   c   d   e   f   g

import java.util.*;

class program179
{
    public static void Display(int iNo)
    {
        char ch = 'a';
        int iCnt = 0;

        for(iCnt = 1;iCnt <= iNo;iCnt++)
        {            
            System.out.print(ch+"\t");
            ch++;
            
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