import java.util.Scanner;

class NumberX
{
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2;iCnt <= (iNo / 2);iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                return false;       //Bad Programming
            }
        }

        return true;
    }
}
class program67
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();
        
        bRet = nobj.CheckPrime(iValue);
        
        if(bRet == true)
        {
            System.out.println("This number is Prime Number");
        }
        else
        {
            System.out.println("This number is not a Prime Number");
        }

    }
}

//Time Complexity : O(N / 2)
// Where N >= 0
