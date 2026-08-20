class node 
{

    public int data;
    public node next;

    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL
{
    public node first;
    public int iCount;

    public SinglyLL()
    {
        System.out.println("Inside Constructor");
        this.first = null;
        this.iCount = 0;
    }

    public void Display()
    {
        while(first != null)
        {
            System.out.print("| "+first.data+" | ->");
            first = first.next;
        }
        System.out.println("");
        
    }

    public int Count()
    {
        int iCount = 0;
        while(first != null)
        {
            iCount++;
            first = first.next;
        }
        return iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(first == null)
        {
            first = newn;
            newn.next = null;
        }
        else
        {
            newn.next = first;
            first = newn;
        }
    }

    public void InsertLast(int iNo)
    {
        node newn = new node(iNo);

        if(first == null)
        {
            first = newn;
            newn.next = null;
        }
        else if(first.next == null)
        {
            first.next = newn;
            newn.next = null;
        }
        else
        {
            node temp = null;
            temp = first;

            while(temp != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }   
    }

    public void InsertAtPos(int iNo,int iPos)
    {

    }

    public void DeleteFirst()
    {

    }
}

class program452
{

    public static void main(String A[]) 
    {
        int iRet = 0;
        SinglyLL sobj = new SinglyLL();
        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);
        sobj.InsertLast(101);
        sobj.InsertLast(111);

        sobj.Display();
        
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet+"\n");

    }
}
