// Write a program to count total number of factors of a number

class Logic
{
    void countFactors(int num)
    {
        int iCnt = 0,iCount = 0;

        for(iCnt = 1;iCnt <= num;iCnt++)
        {
            if((num % iCnt) == 0)
            {
                iCount++;
            }
        }
        System.out.println("Number of factors are : "+iCount);
    }
}

class program104
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}