// 2513. Minimize the Maximum of Two Arrays

#define min(a, b) (a < b ? a : b)
#define ll long long
#define INT_MAX 10 ^ 9
#define min(a, b) ((a < b) ? a : b)

using namespace std;

class Solution
{
public:
    int minimizeSet(int div1, int div2, int c1, int c2)
    {
        ll ans = INT_MAX, l = 1, h = INT_MAX;

        // applying binary search to reduce size of total array recursively to 1-(mid-1)

        while (l <= h) /*
       why WRONG Answer for l<h


       */
        {
            ll mid = (l + h) / 2;
            if (satisfy(div1, div2, c1, c2, mid))
            {
                ans = min(ans, mid);
                h = mid - 1;
            }
            else
                l = mid + 1;
        }
        return ans;
    }

    bool satisfy(ll d1, ll d2, ll c1, ll c2, ll mid)
    {
        ll divby1 = mid / d1;
        ll divby2 = mid / d2;
        ll notdiv1 = mid - mid / d1;
        ll notdiv2 = mid - mid / d2;
        ll notdivboth = mid - mid / lcm(d1, d2);

        // conditiom for satisfying
        if (notdiv1 >= c1 && notdiv2 >= c2 && notdivboth >= c1 + c2)
            return true;
        else
            return false;
    }

    int hcf(int d1, int d2)
    {
        int ans = min(d1, d2);
        while (ans > 0)
        {
            if (d1 % ans == 0 && d2 % ans == 0)
                return ans;

            ans--;
        }
    }

    int lcm(int d1, int d2, int lcm)
    {
        return d1 * d2 / hcf(d1, d2);
    }
};