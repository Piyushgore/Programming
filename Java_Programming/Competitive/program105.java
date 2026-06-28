// Write a program to print all number from 1 to N that are divisible by both 2 and 3

class Logic
{
    void printDivisibleBy2and3(int num)
    {
        int iCnt = 0,iDigit = 0;

        for(iCnt = 1;iCnt <= num;iCnt++)
        {
            if((num % 2) == 0 && (num % 3) == 0)
            {
                System.out.println("Number is divisible by both 2 and 3");
                return;
            }
        }
        System.out.println("Number is not divisible by both 2 and 3");
    }
}

class program105
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
    }
}