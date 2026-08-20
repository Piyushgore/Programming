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

int main()
{
    Searching sobj(5);

    sobj.Accept();
    sobj.Display();

    return 0;
}