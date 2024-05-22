#include <iostream>
# include <bits/stdc++.h>

using namespace std;

// Using RECURSION
double e(int x , int n)
{
    static double p = 1, f = 1;
    
    if (n == 0)
        return 1;
        
    double r; 
    
    r = e(x , n-1);
    p*=x;
    f*= n;
    
    return r + p/f;
}

// using ITERATION
double eIter(int x , int n)
{
    // sum is initialized as ONE (for base statement)
    double s=1;
    // p/q 
    double p=1, q=1;
    int i ;
    for (i=1; i<=n; i++)
    {
        p*=x;
        q*=i;
        s+=(p/q);
    }
    
    return s;
}

int main()
{
    double r, s;
    int x ;
    int n ;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"\nEnter n: ";
    cin>>n;
    r = e(x, n);
    s = eIter(x,n);
    std::cout<<"\nTaylor series by recursion "<<r;
    cout<<"\nTaylor series by iteration "<<s;

    return 0;
}
