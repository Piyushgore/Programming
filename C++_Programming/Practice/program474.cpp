#include<iostream>
using namespace std;

int Maximum(int No1,int No2)
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
    int Ret = 0;

    Ret = Maximum(15,10);
    cout<<"Maximum is : "<<Ret<<endl;

    return 0;
}