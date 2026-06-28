// Write a program to calculate the power of a number using loops

class Logic
{
    void calculatePower(int base, int exp)
    {
        int iCnt = 0,iPower = 1;

        for(iCnt = 0;iCnt <= exp;iCnt++)
        {
            iPower = base * exp; 
        }
        System.out.println("The power of "+base+",  "+exp+" times is : "+iPower);
    }
}

class program95
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2,5);
    }
}