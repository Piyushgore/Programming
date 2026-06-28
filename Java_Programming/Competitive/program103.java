// Write a program to display all factors of a number

class Logic
{
    void displayFactors(int num)
    {
        int iCnt = 0;

        for(iCnt = 1;iCnt <= num;iCnt++)
        {
            if((num % iCnt) == 0)
            {
                System.out.print(iCnt+"\t");
            }
        }
        System.out.println();
    }
}

class program103
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}