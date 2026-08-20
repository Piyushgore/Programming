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

int main()
{
    Searching sobj(5);

    return 0;
}