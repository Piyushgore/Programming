import java.util.*;


class ArrayX
{
    public void Update(int Arr[])
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
class program146
{
    public static void main(String A[])
    {
        int Brr[] = {10,20,30,40,50};
        int iCnt = 0,iLength = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements");
        for(iCnt = 0;iCnt < 5;iCnt++)
        {
            iLength = sobj.nextInt();
        }
                


        System.out.println("Array elements before function call : ");

        for(iCnt = 0;iCnt < 5;iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        ArrayX aobj = new ArrayX();
        aobj.Update(Brr);

        Brr = null;
        System.gc();
    }
}
