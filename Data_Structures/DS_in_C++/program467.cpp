#include<iostream>
using namespace std;

#pragma pack(1)
struct node 
{
    int data;
    struct node *next;
};

class Stack
{
    private:
        int iCount;
        struct node *first;

    public:
        Stack();
        
        void Push(int iNo);         //InsertFirst
        int Pop();                  //DeleteFirst
        int Peep();                 //DeleteFirst
        void Display();
        int Count();
};

Stack :: Stack()
{
    this->iCount = 0;
    this->first = NULL;
}

void Stack :: Push(int iNo)
{
    struct node *newn = NULL;

    newn = new struct node();

    newn->data = iNo;
    newn->next = NULL;

    newn->next = first;
    this->first = newn;
    
    this->iCount++;
}         

int Stack :: Pop()
{
    int iValue = 0;
    struct node *temp = NULL;

    if(first == NULL)
    {
        cout<<"Stack is empty\n";
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

int Stack :: Peep()
{
    int iValue = 0;

    if(first == NULL)
    {
        cout<<"Stack is empty\n";
        return -1;
    }
    else
    {
        iValue = first->data;

        return iValue;
    }
}                 

void Stack :: Display()
{
    struct node *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
}

int Stack :: Count()
{
    return iCount;
}

int main()
{
    int iRet = 0;
    Stack sobj;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Elements of the stack are : "<<iRet<<endl;

    iRet = sobj.Pop();
    cout<<"Popped element is : "<<iRet<<endl;

    sobj.Display();
    
    iRet = sobj.Count();
    cout<<"Elements of the stack are : "<<iRet<<endl;

    iRet = sobj.Peep();
    cout<<"Peeped element is : "<<iRet<<endl;

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Elements of the stack are : "<<iRet<<endl;

    return 0;
}