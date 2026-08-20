#include<iostream>
using namespace std;

double AdditionD(double No1,double No2)
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}
float AdditionF(float No1,float No2)
{
    float Ans;
    Ans = No1 + No2;
    return Ans;
}
int AdditionI(int No1,int No2)
{
    int Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    cout<<AdditionI(10,11)<<endl;
    cout<<AdditionF(10.2f,11.5f)<<endl;
    cout<<AdditionD(10.2,11.5)<<endl;

    return 0;
}