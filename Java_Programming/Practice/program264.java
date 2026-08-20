import java.util.*;

class program264
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0;
        String Arr = null;

        System.out.println("Enter String : ");
        Arr = sobj.nextLine();

        System.out.println("Length of string is : "+Arr.length());

        for(i = 0;i < Arr.length();i++)
        {
            System.out.println(Arr.charAt(i));
        }
        
    }
}