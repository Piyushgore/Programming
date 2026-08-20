#include<iostream>
using namespace std;

#pragma pack(1)

template<class T>
struct node 
{
    int data;
    struct node *next;
};

template<class T>
class Queue
{
    private:
        int iCount;
        struct node<T> *first;

    public:
        Queue();
        
        void Enqueue(T iNo);         //InsertLast
        T Dequeue();                  //DeleteFirst
        void Display();
        T Count();
};

template<class T>
Queue<T> :: Queue()
{
    this->iCount = 0;
    this->first = NULL;
}

template <class T>
void Queue<T> :: Enqueue(T iNo)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    newn = new struct node<T>();

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;
    }    

    this->iCount++;
}         

template <class T>
T Queue<T> :: Dequeue()
{
    int iValue = 0;
    struct node<T> *temp = NULL;

    if(first == NULL)
    {
        cout<<"Queue is empty\n";
        return -1;
    }
    else
    {
        temp = first;
        iValue = first->data;

        first = first->next;

        delete temp;

        iCount--;

        return iValue;
    }  
}                                

template <class T>
void Queue<T> :: Display()
{
    struct node<T> *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
}

template <class T>
T Queue<T> :: Count()
{
    return iCount;
}

int main()
{
    int iRet = 0;
    Queue <int>sobj;

    sobj.Enqueue(11);
    sobj.Enqueue(21);
    sobj.Enqueue(51);
    sobj.Enqueue(101);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Elements of the queue are : "<<iRet<<endl;

    iRet = sobj.Dequeue();
    cout<<"Removed element is : "<<iRet<<endl;

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Elements of the queue are : "<<iRet<<endl;

    return 0;
}