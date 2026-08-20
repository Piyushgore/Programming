#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;

class DoublyLL
{
private:
    PNODE first;
    int iCount;

public:
    DoublyLL();
    void Display();
    int Count();
    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo, int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

DoublyLL ::DoublyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

void DoublyLL ::Display()
{
    PNODE temp = NULL;
    temp = first;

    cout << "NULL <=> ";
    while (temp != NULL)
    {
        cout << "| " << temp->data << " | <=> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int DoublyLL ::Count()
{
    return this->iCount;
}

void DoublyLL ::InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    this->iCount++;
}

void DoublyLL ::InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    this->iCount++;
}

void DoublyLL ::InsertAtPos(int iNo, int iPos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    int i = 0;

    if ((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid Position\n";
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new NODE;
        temp = first;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        this->iCount++;
    }
}

void DoublyLL ::DeleteFirst()
{
    PNODE temp = NULL;

    if (first == NULL)
    {
        return;
    }
    else
    {
        temp = first;
        first = temp->next;
        delete temp;
        if (first != NULL)
        {
            first->prev = NULL;
        }
    }
    this->iCount--;
}

void DoublyLL ::DeleteLast()
{
    PNODE temp = NULL;

    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    this->iCount--;
}

void DoublyLL ::DeleteAtPos(int iPos)
{
    PNODE temp = NULL;
    int i = 0;

    if ((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid Position\n";
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        PNODE tempNext = temp->next;
        temp->next = temp->next->next;
        delete tempNext->next->prev;
        temp->next->prev = temp;

        this->iCount--;
    }
}

int main()
{
    DoublyLL dobj;
   
    int iChoice = 0;
    int iValue = 0;
    int iRet = 0;
    int iPosition = 0;

    while(iChoice != 9)
    {
        cout<<"---------------------------------\n";
        cout<<"Enter your choice : \n";
        cout<<"---------------------------------\n";
        cout<<"! : Insert node at first position\n";
        cout<<"2 : Insert node at last position\n";
        cout<<"3 : Insert node at given position\n";
        cout<<"4 : Delete node at first position\n";
        cout<<"5 : Delete node at last position\n";
        cout<<"6 : Delete node at given position\n";
        cout<<"7 : Display the elements\n";
        cout<<"8 : Count the number of elements\n";
        cout<<"9 : Terminate the application\n";
        cout<<"---------------------------------\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value : \n";
                cin>>iValue;
                dobj.InsertFirst(iValue);
                break;
            case 2:
                cout<<"Enter the value : \n";
                cin>>iValue;
                dobj.InsertLast(iValue);
                break;
            case 3:
                cout<<"Enter the value : \n";
                cin>>iValue;
                cout<<"Enter the position : \n";
                cin>>iPosition;
                dobj.InsertAtPos(iValue,iPosition);
                break;
            case 4:
                dobj.DeleteFirst();
                break;
            case 5:
                dobj.DeleteLast();
                break;
            case 6:
                cout<<"Enter the position : \n";
                cin>>iPosition;
                dobj.DeleteAtPos(iPosition);
                break;
            case 7:
                cout<<"Elements of the LinkedList are : \n";
                dobj.Display();
                break;
            case 8:
                iRet = dobj.Count();
                cout<<"Number of elements are : "<<iRet<<endl;
                break;
            case 9:
                cout<<"Thank you for using Marvellous Infosystems Application\n";
                break;
            default:
                cout<<"Invalid Choice!\n";
        }
    }
    return 0;
}