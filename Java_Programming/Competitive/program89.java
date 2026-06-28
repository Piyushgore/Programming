// Write a program to find the sum of even and odd digits seperately in a number

class Logic
{
    void sumEvenOddDigits(int num)
    {
        int iDigit = 0,iCnt = 0,iSum = 0,iEven = 0,iOdd = 0;

        for(iCnt = 0;num != 0;iCnt++)
        {
            iDigit = num % 10;
            if((iDigit % 2) == 0)
            {
                iEven = iEven + iDigit;
            }
            else
            {
                iOdd = iOdd + iDigit;
            }
            num = num / 10;
        }
        iSum = iEven + iOdd;
        System.out.println("Summation of even and odd digits is : "+iSum);
    }
}

class program89
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}