// Write a program to check whether a number is prime or not

class Logic 
{
    void checkPrime(int num)
    {
        int iCnt = 0;

        for(iCnt = 2;iCnt <= num;iCnt++)
        {
            if((num % iCnt) == 0)
            {
                System.out.println("Not a prime number");
                break;
            }
            else
            {
                System.out.println("Is a prime number");
                break;
            }
        }
    }
}

class program86
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}