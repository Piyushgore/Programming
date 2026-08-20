#include<iostream>
using namespace std;

template<class X>
X Maximum(X No1,X No2, X No3)
{ 

    if(No1 > No2 && No1 > No3)
    {
        return No1;
    }
    else if(No2 > No1 && No2 > No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
    
}

int main()
{

    cout<<"Maximum is : "<<Maximum(11,22,33)<<endl;
    cout<<"Maximum is : "<<Maximum(11.5f,22.2f,33.3f)<<endl;
    cout<<"Maximum is : "<<Maximum(11.5,22.2,33.3)<<endl;

    return 0;
}