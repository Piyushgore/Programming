#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
struct node
{
    T data;
    struct node<T> *next;
    struct node<T> *prev;
};


template <class T>
class DoublyCL
{
    private:
        struct node<T> *first;
        struct node<T> *last ;
        int iCount ;

    public:
        DoublyCL();
        
        void Display();
        int Count();

        void InsertFirst(T iNo);
        void InsertLast(T iNo);
        void InsertAtPos(T iNo , int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
DoublyCL<T> :: DoublyCL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0 ;
}

template <class T>
void DoublyCL<T> :: Display()
{
    do
    {
        cout<<"<=> | "<<first->data<<" | ";
        first = first->next;
    } while (first != last->next);
    cout<<"<=>";
    
    cout<<"\n";
}

template <class T>
int DoublyCL<T> :: Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T> :: InsertFirst(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL ;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
        newn->next = first;
        newn->prev = last;
    }
    else
    {
        newn->next = first;
        first->prev = newn;

        first = newn;
        last->next = first;
        first->prev = last;
    }

    this->iCount++;
}

template <class T>
void DoublyCL<T> :: InsertLast(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL ;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
        newn->next = first;
        newn->prev = last;
    }
    else
    {
        last->next = newn;
        newn->prev = last;

        last = newn;
        last->next = first;
        first->prev = last;

    }

    this->iCount++;
}

template <class T>
void DoublyCL<T> :: InsertAtPos(T iNo , int iPos)
{
    int iCount = 0 ; 
    int i = 0 ;

    struct node<T> *temp = NULL;
    struct node<T> *newn = NULL ;

    iCount = Count();

    if(iPos < 1 || iPos > iCount+1 )
    {
        cout<<"Invalid position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        InsertFirst( iNo);
    }
    else if (iPos == iCount+1)
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new struct node<T>;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL ;

        temp = first;

        for(i = 1 ; i < iPos-1 ; i++)
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

template <class T>
void DoublyCL<T> :: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return ;
    }
    else if (first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete first->prev;

        first->prev = last;
        last->next = first;
    }

    this->iCount--;
}

template <class T>
void DoublyCL<T> :: DeleteLast()
{
    struct node<T> *temp = NULL;

    if(first == NULL && last == NULL)
    {
        return ;
    }
    else if (first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        temp = last->prev;
        
        delete last;

        last = temp ;
        last->next = first;
        first->prev = last;
    }

    this->iCount--;
}

template <class T>
void DoublyCL<T> :: DeleteAtPos( int iPos)
{
    int iCount = 0 ; 
    int i = 0 ;

    struct node<T> *temp = NULL;

    iCount = Count();

    if(iPos < 1 || iPos > iCount )
    {
        cout<<"Invalid position"<<endl;
        return;
    }

    if(iPos == 1)
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

        for(i = 1 ; i < iPos-1 ; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;

        temp->next->prev = temp;

        this->iCount--;

    }
}


int main()
{
    DoublyCL<int> dobj;
    int iRet = 0 ;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    dobj.DeleteFirst();

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    dobj.DeleteLast();

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    dobj.InsertAtPos(105 , 4);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    dobj.DeleteAtPos( 4);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    return 0 ;
}