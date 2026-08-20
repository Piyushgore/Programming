#include<iostream>
using namespace std;

float Maximum(float No1,float No2)
{ 
    float Ans;

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
    float Ret = 0;

    Ret = Maximum(15.2f,10.4f);
    cout<<"Maximum is : "<<Ret<<endl;

    return 0;
}