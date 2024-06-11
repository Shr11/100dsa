#include <bits/stdc++.h>
using namespace std;

// Global n (for memoization)
int n;

// Iterative fibonacci function

int iter_fib(int n)
{
    int t0=0 , t1=1, i, sum;
    
    // if n = 0 or 1 
    if (n <= 1)
        return n;
        
    // for n > 1
    for (i = 2; i<=n; i++)
    {
        // t2 = sum of previous elements
        sum = t0 + t1;
        t0= t1;
        t1= sum;
    }
    return sum;
}

// Recursive fibonacci function

int rec_fib(int n)
{
    if (n<=1)
        return n;
        
    return rec_fib(n-2) + rec_fib(n-1);
}

// recursive fibonacci using MEMOIZATION

// declaring a global array F with all -1, to store intermediate results & prevent excessive recursion
// vector<int> F(n,-1); (not working for n declared as Global var??)

int memo_fib(int n)
{
    // or declaring vector as static
    static vector<int> F(n,-1);
    
    if (n <= 1)
        {
            F[n] = n;
            return n;
        }
        
    else
    {
        if (F[n-2]==-1)
            F[n-2] = memo_fib(n-2);
            
        if (F[n-1]==-1)
            F[n-1] = memo_fib(n-1);
            
        return F[n-2] + F[n-1];
    }
}

// Driver Code

int main()
{
    cout<<"Enter the value of n: ";
    cin>>n;

    //results
    
    std::cout<<endl<<"Iterative fibonacci value is : "<<iter_fib(n)<<endl;
    std::cout<<"Recursive fibonacci value is : "<<rec_fib(n)<<endl;
    std::cout<<"Recursive fibonacci value using Memoization is : "<<memo_fib(n)<<endl;

    return 0;
}
