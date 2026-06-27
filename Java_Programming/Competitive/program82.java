// Write a program to check whether a number is a palindrome or not

class Logic
{
    void checkPalindrome(int inum)
    {
        int iNo = 0;
        int iReverse = 0;
        int iOriginal = inum; 

        while (inum != 0)
        {
            iNo = inum % 10;          
            iReverse = iReverse * 10 + iNo; 
            inum = inum / 10;       
        }

        if(iReverse == iOriginal)
        {
            System.out.println("It is palindrome");
        }
        else
        {
            System.out.println("It is not palindrome");
        }
    }
}

class program82
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121); 
    }
}
