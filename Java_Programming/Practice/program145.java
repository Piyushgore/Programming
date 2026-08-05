import java.util.*;

class program145
{
    public static void Update(int Arr[])
    {
        int iCnt = 0;

        for(iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            Arr[iCnt]++;
        }
        System.out.println("Array elements after function call : ");

        for(iCnt = 0;iCnt < 5;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public static void main(String A[])
    {
        int Brr[] = {10,20,30,40,50};
        int iCnt = 0;

        System.out.println("Array elements before function call : ");

        for(iCnt = 0;iCnt < 5;iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        Update(Brr);

        Brr = null;
        System.gc();
    }
}
