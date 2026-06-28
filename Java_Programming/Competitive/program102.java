// Write a program to count how many even and odd numbers are present between 1 and N

class Logic
{
    void countEvenOddRange(int n)
    {
        int iCnt = 0,iEven = 0,iOdd = 0;

        for(iCnt = 1;iCnt <= n;iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iEven++;
            }
            else
            {
                iOdd++;
            }
        }
        System.out.println("There were "+iEven+" Even numbers and "+iOdd+" Odd numbers");
    }
}

class program102
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}