import java.util.*;

class StringX
{
    public String toUpperX(String str)
    {
        char Arr[] = str.toCharArray();
        int i = 0;

        for(i = 0;i < Arr.length;i++)
        {
            Arr[i] = (char)(Arr[i] - 32);       //Issue
        }

        return new String(Arr);
    }
}


class program285
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();
        String sRet = null;

        System.out.println("Enter String : ");
        data = sobj.nextLine();  

        sRet = strobj.toUpperX(data);

        System.out.println("Updated string is : "+sRet);
   }
}