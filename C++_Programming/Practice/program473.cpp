#include<iostream>
using namespace std;

template<class T>
T Addition(T No1,T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    cout<<Addition(10,11)<<endl;
    cout<<Addition(10.2f,11.5f)<<endl;
    cout<<Addition(10.2,11.5)<<endl;

    return 0;
}