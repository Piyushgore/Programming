// Write a program to check whether a number is positive,negative or zero

class Logic 
{
    void CheckSign(int num)
    {
        if(num > 0)
        {
            System.out.println("Number is positive");
        }
        else if(num < 0)
        {
            System.out.println("Number is negative");
        }
        else
        {
            System.out.println("Number is 0");
        }
    }
}
class program90
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckSign(-8);
    }
}