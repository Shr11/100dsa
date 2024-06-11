#include <bits/stdc++.h>
using namespace std;

// Global n (for memoization)
int n;

// no answer as n is initialized as zero?
vector<int> F(n,-1);

int memo_fib(int n)
{
    // static
    vector<int> F(n,-1);
    
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
   
    int ans = memo_fib(n);
    std::cout<<"Recursive fibonacci value using Memoization is : "<<ans<<endl;

    return 0;
}
