#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int X)       // Parametrised Constructor
        {
            cout<<"Inside Constructor\n";
            iSize = X;              // Characteristics initialisation
            Arr = new int[iSize];   // Resource Allocation
        }

        // Destructor
        ~ArrayX()
        {
            cout<<"Inside Destructor\n";

            delete []Arr;           // Resource Deallocation
        }
};

int main()
{
    ArrayX aobj2(5); 

    return 0;
}
