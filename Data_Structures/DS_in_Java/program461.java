class DoublyCL {
    static class Node {
        int data;
        Node next;
        Node prev;

        public Node(int data) {
            this.data = data;
            this.next = null;
            this.prev = null;
        }
    }

    private Node head;
    private Node tail;

    public DoublyCL() {
        this.head = null;
        this.tail = null;
    }

    public void display() {
        if (head == null && tail == null) {
            return;
        }

        Node temp = head;
        do {
            System.out.printf("| %d | <-> ", temp.data);
            temp = temp.next;
        } while (temp != tail.next);

        System.out.println("NULL");
    }

    public int count() {
        int count = 0;
        if (head == null && tail == null) {
            return 0;
        }

        Node temp = head;
        do {
            count++;
            temp = temp.next;
        } while (temp != tail.next);

        return count;
    }

    public void insertFirst(int no) {
        Node newn = new Node(no);

        if (head == null && tail == null) {
            head = newn;
            tail = newn;
            head.prev = tail;
            tail.next = head;
        } else {
            newn.next = head;
            newn.prev = tail;
            head.prev = newn;
            head = newn;
            tail.next = head;
        }
    }

    public void insertLast(int no) {
        Node newn = new Node(no);

        if (head == null && tail == null) {
            head = newn;
            tail = newn;
            head.prev = tail;
            tail.next = head;
        } else {
            newn.prev = tail;
            newn.next = head;
            tail.next = newn;
            tail = newn;
            head.prev = tail;
        }
    }

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

            for (int i = 1; i < pos - 1; i++) {
                temp = temp.next;
            }

            newn.next = temp.next;
            newn.prev = temp;
            temp.next.prev = newn;
            temp.next = newn;
        }
    }

    public void deleteFirst() {
        if (head == null && tail == null) {
            return;
        } else if (head == tail) {
            head = null;
            tail = null;
        } else {
            head = head.next;
            head.prev = tail;
            tail.next = head;
        }
    }

    public void deleteLast() {
        if (head == null && tail == null) {
            return;
        } else if (head == tail) {
            head = null;
            tail = null;
        } else {
            tail = tail.prev;
            tail.next = head;
            head.prev = tail;
        }
    }

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
            target.next.prev = temp;
        }
    }
}

class program459 {
    public static void main(String[] args) {
        DoublyCL sobj = new DoublyCL();
        int iRet;

        sobj.insertFirst(101);
        sobj.insertFirst(51);
        sobj.insertFirst(21);
        sobj.insertFirst(11);
        sobj.insertLast(121);

        sobj.display();

        iRet = sobj.count();
        System.out.printf("Number of elements is : %d\n", iRet);

        sobj.deleteFirst();

        sobj.display();

        iRet = sobj.count();
        System.out.printf("Number of elements is : %d\n", iRet);

        sobj.deleteLast();

        sobj.display();

        iRet = sobj.count();
        System.out.printf("Number of elements is : %d\n", iRet);

        sobj.insertAtPos(105, 4);

        sobj.display();

        iRet = sobj.count();
        System.out.printf("Number of elements is : %d\n", iRet);

        sobj.deleteAtPos(4);

        sobj.display();

        iRet = sobj.count();
        System.out.printf("Number of elements is : %d\n", iRet);
    }
}