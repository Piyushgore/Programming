#include<iostream>
using namespace std;


class Searching
{
    private:
        int *arr;
        int iSize;

    public:
        Searching(int iNo);
        ~Searching();

        void Accept();
        void Display();

        bool LinearSearch(int iNo);
        bool BiDirectionalSearch(int iNo);

};

Searching :: Searching(int iNo)
{
    iSize = iNo;
    arr = new int[iSize];

}

Searching :: ~Searching()
{
    delete []arr;
}

void Searching :: Accept()
{
    int i = 0;

    cout<<"Enter the elements : \n";

    for(i = 0;i < iSize;i++)
    {
        cin>>arr[i];
    }
}

void Searching :: Display()
{
    int i = 0;

    cout<<"Elements of the array are : \n";

    for(i = 0;i < iSize;i++)
    {
        cout<<arr[i]<<"\n";
    }
}

bool Searching :: LinearSearch(int iNo)
{
    bool bFlag = false;
    int i = 0;

    for(i = 0;i < iSize;i++)
    {
        if(arr[i] == iNo)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

bool Searching :: BiDirectionalSearch(int iNo)
{
    bool bFlag = false;
    int iStart = 0,iEnd = 0;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart < iEnd)        //Wrong Condition (Middle element issue)
    {
        if(arr[iStart] == iNo || arr[iEnd] == iNo)
        {
            bFlag = true;
            break;
        }

        iStart++;
        iEnd--;
    }

    return bFlag;
}

int main()
{
    Searching sobj(5);

    sobj.Accept();
    sobj.Display();

    if(sobj.LinearSearch(30))
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"There is no such element\n";
    }

    if(sobj.BiDirectionalSearch(30))
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"There is no such element\n";
    }

    return 0;
}