// Write a program to find the sum of digits of a number

class Logic
{
    void sumOfDigits(int num)
    {
        int iCnt = 0,iSum = 0;
        int iDigit = 0;

        for(iCnt = 0;num != 0;iCnt++)
        {
            iDigit = num % 10;
            iSum = iSum + iDigit;
            num = num / 10;
        }
        System.out.println("Summation is : "+iSum);
    }
}

class program81
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}
