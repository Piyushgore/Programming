// Input : 7
// Output : A   B   C   D   E   F   G

import java.util.*;

class program182
{
    public static void Display(int iNo)
    {
        char ch = '\0';
        int iCnt = 0;

        for(iCnt = 1,ch = 65;iCnt <= iNo;iCnt++,ch++)
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