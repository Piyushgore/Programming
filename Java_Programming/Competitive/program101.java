// Write a program to find the product of digits in a given number

class Logic 
{
    void ProductOfDigits(int num)
    {
        int iMult = 1,iDigit = 0,iCnt = 0;

        for(iCnt = 1;num != 0;iCnt++)
        {
            iDigit = num % 10;
            iMult = iMult * iDigit;
            num = num / 10;
        }
        System.out.println("The product of number is : "+iMult);
    }
}
class program101

{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.ProductOfDigits(234);
    }
}