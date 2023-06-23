link: https://codeforces.com/contest/1810/problem/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int n, c, d;
        cin >> n >> c >> d;
        vector<long long int> v(n);
        for (auto &it : v)
            cin >> it;
        sort(v.begin(), v.end());
        long long ans = 0, add = LLONG_MAX;
        if (v[0] != 1)
        {
            ans += d;
            v.push_back(1);
            sort(v.begin(), v.end());
            n++;
        }
        v.erase(unique(v.begin(), v.end()), v.end());
        int toDelete = n - v.size();
        ans += (toDelete * c);
        int size = v.size();
        for (int i = 0; i < v.size(); i++)
        {
            add = min(add, (((v[i] - (i + 1)) * d) + ((size - (i + 1)) * c)));
        }
        ans += add;
        cout << ans << "\n";
    }
}
