// Input : 7
// Output : A   b   C   d   E   f   G

import java.util.*;

class program187
{
    public static void Display(int iNo)
    {
        char ch = '\0';
        char hc = '\0';
        int iCnt = 0;

        for(iCnt = 1,ch = 'A',hc = 'a';iCnt <= iNo;iCnt++,hc++,ch++)
        {   
            if(iCnt % 2 == 0)
            {
                System.out.print(hc+"\t");
            }
            else
            {
                System.out.print(ch+"\t");
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