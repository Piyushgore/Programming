// Write generic program to accept N values reverse the contents

#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr,int iSize)
{
    int i = 0,iNum = 0;
    T temp = 0;

    int start = 0;
    int end = iSize - 1;

    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    for(int i = 0;i<9;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    Reverse(arr,9);

    for(int i = 0;i<9;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    return 0;
}