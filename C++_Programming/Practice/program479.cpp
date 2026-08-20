#include<iostream>
using namespace std;

template<class X>
X Maximum(X No1,X No2)
{ 
    X Ans;

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