// Write a generic program to accept N values and search first occurence of 
// any specific value

#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr,int iSize,T iNo)
{
    int i = 0,iCount = 0;

    for(i = 0;i <= iSize;i++)
    {
        iCount++;
        if(arr[i] == iNo)
        {
            return iCount;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchFirst(arr,9,40);

    cout<<iRet<<endl;

    return 0;
}