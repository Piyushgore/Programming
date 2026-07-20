// Generic Program to Multiply Two Numbers

#include<iostream>

template <class T>

T Multiply(T no1, T no2) 
{ 
    T ans; 

    ans = no1 * no2; 

    return ans; 
} 

int main() 
{ 
    int iRet = Multiply(10,20); 
    
    printf("%d\n",iRet); 

    float fRet = 0.0f;
    fRet = Multiply(10.0f,20.0f); 

    printf("%f\n",fRet); 

    return 0; 
} 