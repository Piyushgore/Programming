// Generic Program to Find Largest Number from Three Numbers


#include<iostream>

template <class T>

T Max(T no1, T no2,T no3) 
{ 
    T ans; 

    if(no1 > no2 && no1 > no3)
    {
        ans = no1;
    }
    else if(no2 > no1 && no2 > no3)
    {
        ans = no2;
    }
    else
    {
        ans = no3;
    }

    return ans; 
} 

int main() 
{ 
    int iRet = Max(10,20,30); 
    
    printf("%d\n",iRet); 

    float fRet = 0.0f;
    fRet = Max(10.0f,20.0f,30.0f); 

    printf("%f\n",fRet); 

    return 0; 
} 