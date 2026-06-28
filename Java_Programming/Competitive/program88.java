// Write a program to print all odd numbers up to N.

class Logic
{
    void printEvenNumbers(int n)
    {
        int iCnt = 0;

        for(iCnt = 1;iCnt <= n;iCnt++)
        {
            if((iCnt % 2) != 0)
            {
                System.out.print(iCnt+"\t");
            }
        }
    }
}

class program88
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}