// Write a program to print multiplication table of a number.

class Logic
{
    void printTable(int inum)
    {
        int iCnt = 0;
        for(iCnt = 1;iCnt <= 10;iCnt++)
        {
            System.out.println(inum+" x "+iCnt+" = "+inum * iCnt);
        }
    }
}

class program85
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printTable(35);
    }
}