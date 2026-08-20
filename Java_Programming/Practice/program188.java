// HW

// Input : 11
// Output : *   *   *   #   #   #   *   *   *   #   #

import java.util.*;

class program188
{
    public static void Display(int iNo)
    {
        
        int iCnt = 0;
        int iCount3 = 0;

        for(iCnt = 1;iCnt <= iNo;iCnt++)
        {   
            if(iCnt % 3 == 0)
            {
                iCount3++;
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