// Input : 7
// Output : a   b   c   d   e   f   g

import java.util.*;

class program180
{
    public static void Display(int iNo)
    {
        char ch = '\0';
        int iCnt = 0;

        for(iCnt = 1,ch = 'a';iCnt <= iNo;iCnt++,ch++)
        {            
            System.out.print(ch+"\t");
            
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