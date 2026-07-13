import java.util.*;

class DigitX
{
    public int SumEvenDigits(int iNo)
    {
        int iCount = 0;
        int iSum = 0;

        while(iNo > 0)
        {   
            iCount = iNo % 10;
            if(iCount % 2 == 0)
            {
                iSum = iSum + iCount;
            }
            iNo = iNo / 10;
        }
        return iSum;
    }
}

class program91
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iRet = dobj.SumEvenDigits(iValue);

        System.out.println("The summation digits is : "+iRet);

    }
}
