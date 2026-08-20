// Output : *   *   *   *
//          *   *   *   *
//          *   *   *   *
//          *   *   *   *


import java.util.*;

class program191
{
    public static void Display()
    {
        int i = 0;
        int j = 0;

        for(i = 1;i <= 4;i++)
        {   
            for(j = 1;j <= 4;j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
        System.out.println();
    }

    public static void main(String A[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        // System.out.println("Enter the number of elements : ");
        // iValue = sobj.nextInt();

        Display();
    }
}