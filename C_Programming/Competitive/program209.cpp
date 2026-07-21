// Write a generic program to accept N values and search last occurence of 
// any specific value

#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr,int iSize,T iNo)
{
    int i = 0,iCount = 0,iCnt = 0;

    for(i = 0;i <= iSize;i++)
    {
        iCnt++;
        if(arr[i] == iNo)
        {
            iCount = iCnt;
        }
    }

    return iCount;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchLast(arr,9,40);

    cout<<iRet<<endl;

    return 0;
}