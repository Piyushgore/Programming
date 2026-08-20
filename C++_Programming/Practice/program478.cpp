#include<iostream>
using namespace std;

template<class T>
T Maximum(T No1,T No2)
{ 
    T Ans;

    if(No1 > No2)
    {
        Ans = No1;
    }
    else
    {
        Ans = No2;
    }
    return Ans;
}

int main()
{

    cout<<"Maximum is : "<<Maximum(11,22)<<endl;
    cout<<"Maximum is : "<<Maximum(11.5f,22.2f)<<endl;
    cout<<"Maximum is : "<<Maximum(11.5,22.2)<<endl;

    return 0;
}