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
        node temp = first;
        while(temp != null)
        {
            System.out.print("| "+temp.data+" | ->");
            temp = temp.next;
        }
        System.out.println("null\n");
        
    }

    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }
        this.iCount++;
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

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }   
        this.iCount++;
    }

    public void InsertAtPos(int iNo,int iPos)
    {
        int i = 0;

        if((iPos < 1) || (iPos > iCount+1))
        {
            System.out.println("Invalid position\n");
            return;
        }
        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == iCount + 1)
        {
            InsertLast(iNo);
        }
        else
        {
            node newn = new node(iNo);
            node temp = first;

            for(i = 1;i < (iPos - 1);i++)
            {
                temp = temp.next;
            }

            temp.next = newn;
            newn.next = temp.next.next;
        }
    }

    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            first = first.next;
        }
        this.iCount--;
    }

    public void DeleteLast()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            node temp = first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
        this.iCount--;
    }

    public void DeleteAtPos()
    {

    }
}

class program456
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
        sobj.InsertLast(121);

        sobj.Display();
        
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet+"\n");

        sobj.DeleteFirst();

        sobj.Display();
        
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet+"\n");

        sobj.DeleteLast();

        sobj.Display();
        
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet+"\n"); 

        sobj.InsertAtPos(81,2);

        sobj.Display();
        
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet+"\n"); 

    }
}
