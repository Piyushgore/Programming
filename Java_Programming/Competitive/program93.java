// Write a program to check whether a number is divisible by 5  and 11 or not

class Logic
{
    void checkDivisible(int num)
    {
        if((num % 5) == 0 && (num % 11) == 0)
        {
            System.out.println("The number is divisible");
        }
        else
        {
            System.out.println("The number is not divisible");
        }
    }
}

class program93
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkDivisible(55);
    }
}