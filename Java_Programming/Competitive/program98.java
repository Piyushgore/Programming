// Write a program to check whether a number is a perfect number or not

class Logic
{
    void checkPerfect(int num)
    {
        int iCnt = 0,iSum = 0;

        for(iCnt = 1;iCnt < num;iCnt++)
        {
            if((num % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == num)
        {
            System.out.println("The number "+num+" is a perfect number");
        }
        else
        {
            System.out.println("The number "+num+" is not a perfect number");
        }
    }
}

class program98
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}