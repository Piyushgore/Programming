#include<iostream>
using namespace std;

float Maximum(float No1,float No2)
{
    if(No1 > No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
}

int main()
{
    float Ret = 0;

    Ret = Maximum(15.2f,10.4f);
    cout<<"Maximum is : "<<Ret<<endl;

    return 0;
}