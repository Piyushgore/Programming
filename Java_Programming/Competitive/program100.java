// Write a program to find the smallest digit in a given number

class Logic 
{
    void findSmallestDigit(int num)
    {
        int iMin = num % 10,iDigit = 0,iCnt = 0;

        for(iCnt = 1;num != 0;iCnt++)
        {
            iDigit = num % 10;
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            num = num / 10;
        }
        System.out.println("The minimum number is : "+iMin);
    }
}
class program100

{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}