import java.util.*;

class DigitX
{
    public void CountOddDigits(int iNo)
    {
        int iCountEven = 0;
        int iCountOdd = 0;
        int iDigit = 0;

        while(iNo != 0)
        {   
            iDigit = iNo % 10;
            
            if(iDigit % 2 != 0)
            {
                iCountOdd++;
            }
            
            else
            {
                iCountEven++;
            }

            iNo = iNo / 10;
        }
        
        System.out.println("Number of Even numbers is : "+iCountEven);
        System.out.println("Number of Even numbers is : "+iCountOdd);

    }
}

class program88
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        dobj.CountOddDigits(iValue);

    }
}
