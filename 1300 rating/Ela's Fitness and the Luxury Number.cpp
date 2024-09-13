#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

// ll BE(ll a,ll b)
// {
//     ll ans=1LL;
//     while(b)
//     {
//         if(b%2LL) ans*=a;
//         ans%=mod;
//         a*=a;
//         a%=mod;
//         b/=2LL;
//     }
//     return ans;
// }

ll bs_sqrt(ll x)
{
    ll left = 0, right = 2000000000;
    while (right > left)
    {
        ll mid = (left + right) / 2;

        if (mid * mid > x)
            right = mid;
        else
            left = mid + 1;
    }
    return left - 1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll l, r;
        cin >> l >> r;
        ll root1 = bs_sqrt(l);
        ll root2 = bs_sqrt(r);
        ll ans = 0;
        ans = (root2 - root1 + 1LL) * 3LL;
        ll base1 = root1 * root1;
        if (l <= base1)
            ans -= (1LL - 1LL);
        else if (l <= (base1 + root1))
            ans -= (2LL - 1LL);
        else if (l <= (base1 + root1 + root1))
            ans -= (3LL - 1LL);
        ll base2 = root2 * root2;
        base2 += root2 + root2;
        if (r >= base2)
            ans -= (3LL - 3LL);
        else if (r >= (base2 - root2))
            ans -= (3LL - 2LL);
        else if (r >= (base2 - root2 - root2))
            ans -= (3LL - 1LL);
        cout << ans << "\n";
    }
}
