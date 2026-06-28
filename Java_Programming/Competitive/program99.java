// Write a program to find the largest digit in a given number

class Logic 
{
    void findLargestDigit(int num)
    {
        int iMax = 0,iDigit = 0,iCnt = 0;

        for(iCnt = 1;num != 0;iCnt++)
        {
            iDigit = num % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            num = num / 10;
        }
        System.out.println("The maximum number is : "+iMax);
    }
}

class program99
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}