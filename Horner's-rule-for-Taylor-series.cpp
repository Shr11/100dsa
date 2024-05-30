#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
double hornIter(double x, double n)
{
    double res = 1;
    
    for(;n>0;n--)
    res = 1 + x*res/n; // as int/int is int thus needing typecasting but int*double = double and double/int = double
    
    return res;
}

// by recursion
double hornerRec(int x, int n)
{
    static double res = 1;
    
    if (n==0)
        return res;
        
    res = 1 + x*res/n;
    
    return hornerRec(x,n-1);
    
}

int main()
{
    int x, n;
    
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"\n Enter the value of n: ";
    cin>>n;
    cout<<endl;
    cout<<"result of taylor series using horner's rule by iteration and recursion is ";
    
    cout<<hornIter(x,n)<<endl;
    cout<<hornerRec(x,n)<<endl;
    
    return 0;
}
