#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    void maxele(vector<ll>& arr){
        ll ans = 0;
        if (arr.size() == 2)
            {
                sort(arr.begin(), arr.end());
                ans = arr[0];
            }
            
        else
            {
                vector<ll> temp;
                for (ll i = 0; i < arr.size() - 2; i++)
                {
                    temp.emplace_back(arr[i]);
                    temp.emplace_back(arr[i+1]);
                    temp.emplace_back(arr[i+2]);
                    sort(temp.begin(), temp.end());
                    ans = max(ans, temp[1]);
                    
                }
            }
            
            cout<<ans<<endl;
    }
};

int main()
{
    Solution ab;
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll> arr;
        ll n;
        cin>>n;
        for (ll i = 0 ; i < n; i++)
        {
            ll e;
            cin>>e;
            arr.emplace_back(e);
        }
        
        ab.maxele(arr);
    }
    
    return 0;
}
