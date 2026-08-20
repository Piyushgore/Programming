#include<iostream>
using namespace std;

#pragma pack(1)
struct node 
{
    int data;
    struct node *next;
};

class Queue
{
    private:
        int iCount;
        struct node *first;

    public:
        Queue();
        
        void Enqueue(int iNo);         //InsertLast
        int Dequeue();                  //DeleteFirst
        void Display();
        int Count();
};

Queue :: Queue()
{
    this->iCount = 0;
    this->first = NULL;
}

void Queue :: Enqueue(int iNo)
{
    struct node *newn = NULL;
    struct node *temp = NULL;

    newn = new struct node();

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

int Queue :: Dequeue()
{
    int iValue = 0;
    struct node *temp = NULL;

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

void Queue :: Display()
{
    struct node *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
}

int Queue :: Count()
{
    return iCount;
}

int main()
{
    int iRet = 0;
    Queue sobj;

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