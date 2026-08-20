class SinglyCL
{
    static class Node {
        int data;
        Node next;

        public Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    // Head and Tail references
    private Node head;
    private Node tail;

    public SinglyCL() 
    {
        this.head = null;
        this.tail = null;
    }

    // Display the list
    public void display() {
        if (head == null && tail == null) {
            return;
        }

        Node current = head;
        do {
            System.out.printf("| %d | -> ", current.data);
            current = current.next;
        } while (current != tail.next);

        System.out.println();
    }

    // Count elements
    public int count() {
        int count = 0;
        if (head == null && tail == null) {
            return 0;
        }

        Node current = head;
        do {
            count++;
            current = current.next;
        } while (current != tail.next);

        return count;
    }

    // Insert at First
    public void insertFirst(int no) {
        Node newn = new Node(no);

        if (head == null && tail == null) {
            head = newn;
            tail = newn;
        } else {
            newn.next = head;
            head = newn;
        }
        // Maintain circular property
        tail.next = head;
    }

    // Insert at Last
    public void insertLast(int no) {
        Node newn = new Node(no);

        if (head == null && tail == null) {
            head = newn;
            tail = newn;
        } else {
            tail.next = newn;
            tail = newn;
        }
        // Maintain circular property
        tail.next = head;
    }

    // Insert at Position
    public void insertAtPos(int no, int pos) {
        int iCount = count();

        if (pos < 1 || pos > iCount + 1) {
            System.out.println("Invalid position");
            return;
        }

        if (pos == 1) {
            insertFirst(no);
        } else if (pos == iCount + 1) {
            insertLast(no);
        } else {
            Node temp = head;
            Node newn = new Node(no);

            // Traverse to the node before the target position
            for (int i = 1; i < pos - 1; i++) {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;
        }
    }

    // Delete First
    public void deleteFirst() {
        if (head == null && tail == null) {
            return;
        } else if (head == tail) {
            head = null;
            tail = null;
        } else {
            head = head.next;
            // In C, they freed the old head which was pointed to by tail.next
            // In Java, the GC handles the old object reference
            tail.next = head;
        }
    }

    // Delete Last
    public void deleteLast() {
        if (head == null && tail == null) {
            return;
        } else if (head == tail) {
            head = null;
            tail = null;
        } else {
            Node temp = head;
            while (temp.next != tail) {
                temp = temp.next;
            }

            tail = temp;
            tail.next = head;
            // Old tail is now unreachable, GC will collect it
        }
    }

    // Delete at Position
    public void deleteAtPos(int pos) {
        int iCount = count();

        if (pos < 1 || pos > iCount) {
            System.out.println("Invalid position");
            return;
        }

        if (pos == 1) {
            deleteFirst();
        } else if (pos == iCount) {
            deleteLast();
        } else {
            Node temp = head;
            for (int i = 1; i < pos - 1; i++) {
                temp = temp.next;
            }

            Node target = temp.next;
            temp.next = target.next;
            // target is now unreachable, GC will collect it
        }
    }
}

class program458
{
    public static void main(String A[])
    {
        SinglyCL sobj = new SinglyCL();
        int iRet;

        sobj.insertFirst(101);
        sobj.insertFirst(51);
        sobj.insertFirst(21);
        sobj.insertFirst(11);
        sobj.insertLast(121);

        sobj.display();

        iRet = sobj.count();
        System.out.printf("Number of elements is : %d%n", iRet);

        sobj.deleteFirst();

        sobj.display();

        iRet = sobj.count();
        System.out.printf("Number of elements is : %d%n", iRet);

        sobj.deleteLast();

        sobj.display();

        iRet = sobj.count();
        System.out.printf("Number of elements is : %d%n", iRet);

        sobj.insertAtPos(105, 4);

        sobj.display();

        iRet = sobj.count();
        System.out.printf("Number of elements is : %d%n", iRet);

        sobj.deleteAtPos(4);

        sobj.display();

        iRet = sobj.count();
        System.out.printf("Number of elements is : %d%n", iRet);
    }
}