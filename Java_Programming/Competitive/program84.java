// Write a program to find minimum of three numbers

class Logic
{
    void findMin(int a,int b,int c)
    {
        if(a < b && a < c)
        {
            System.out.println(a+" is smaller");
        }
        else if(b < a && b < c)
        {
            System.out.println(b+" is smaller");
        }
        else
        {
            System.out.println(c+" is smaller");
        }
    }
}

class program84
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findMin(3,7,2);
    }
}