import java.util.*;

class ArrayX
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

}
class program147
{
    public static void main(String A[])
    {
        int Brr[] = null;
        int iCnt = 0,iLength = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements");

        iLength = sobj.nextInt();

        System.out.println("Enter the elements : \n");


        for(iCnt = 0;iCnt < iLength;iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }

        System.out.println("Array elements before function call : ");

        for(iCnt = 0;iCnt < iLength;iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        // ArrayX aobj = new ArrayX();      if static is declared then no need for this
        ArrayX.Update(Brr);

        Brr = null;
        System.gc();
    }
}
