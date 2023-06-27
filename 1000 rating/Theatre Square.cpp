link: https://codeforces.com/problemset/problem/1/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long ans = 0, add = 0;
    ans = (n / a);
    if ((n % a))
        ans++;
    long long remain = m - a;
    if (remain > 0)
    {
        add = (remain / a);
        if ((remain % a))
            add++;
        ans += (add * ans);
    }
    cout << ans << "\n";
}
