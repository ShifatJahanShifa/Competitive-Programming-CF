#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ncr(ll n, ll r)
{
    if(r>n) return 0;
    if (n - r < r)
        r = n - r;
    ll up = 1, down = 1;
    if (r == 0)
        up = 1;
    else
    {
        while (r)
        {
            up *= n;
            down *= r;
            int gcd = __gcd(up, down);
            up /= gcd;
            down /= gcd;
            n--, r--;
        }
    }
    return up;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        if (n < 3)
            cout << 0 << "\n";
        else
        {
            ll ans = 0;
            for (int i = 0; i < n; )
            {
                int f=mp[v[i]];
                ans+=ncr(f,3);
                ll temp=ncr(f,2);
                ans+=(temp*(i-0));
                i+=f;
            }
            cout << ans << "\n";
        }
    }
}
