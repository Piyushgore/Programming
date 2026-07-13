//Check whether means use boolean

import java.util.*;

class DigitX
{
    public boolean CheckPalindrome(int iNo)
    {
        int iDigit = 0;
        int iTemp = 0;
        iTemp = iNo;
        int iRev = 0;

        while(iNo > 0)
        {   
            iDigit = iNo % 10;
            iRev = (iRev * 10) + iDigit;
            iNo = iNo / 10;
        }

        if(iTemp == iRev)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}

class program93
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        bRet = dobj.CheckPalindrome(iValue);

        if(bRet == true)
        {
            System.out.println("Number is palindrome");
        }
        else
        {
            System.out.println("Number is not palindrome");
        }
    }
}
