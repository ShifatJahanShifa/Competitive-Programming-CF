#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        ll a, x;
        cin >> n;
        vector<ll> f, s, t;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> x;
            if (a == 1)
                f.push_back(x);
            else if (a == 2)
                s.push_back(x);
            else
                t.push_back(x);
        }
        sort(s.begin(), s.end());
        sort(f.begin(), f.end(), greater<>());
        ll low = f[0];
        ll high = s[0];
        ll ans = 0;
        if (high >= low)
        {
            ans=high - low + 1;
            if (t.size() != 0)
            {
                int size = t.size();
                for (int i = 0; i < size; i++)
                {
                    if (t[i] >= low and t[i] <= high)
                        ans--;
                }
            }
        }
        cout << ans << "\n";
    }
}
