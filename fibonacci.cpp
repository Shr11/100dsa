#include <bits/stdc++.h>
using namespace std;



int memo_fib(int n, vector<int>& F)
{
    
    
    if (n <= 1)
        {
            F[n] = n;
            return n;
        }
        
    else
    {
        if (F[n-2]==-1)
            F[n-2] = memo_fib(n-2,F);
            
        if (F[n-1]==-1)
            F[n-1] = memo_fib(n-1,F);
           
        F[n] = F[n-2] + F[n-1];
        return F[n-2] + F[n-1];
    }
}

// Driver Code

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int> F(n,-1);
    //results
   
    int ans = memo_fib(n,F);
    std::cout<<"Recursive fibonacci value using Memoization is : "<<ans<<endl;

    return 0;
}
