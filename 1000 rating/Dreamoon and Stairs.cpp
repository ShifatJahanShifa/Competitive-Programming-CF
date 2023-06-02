link: https://codeforces.com/problemset/problem/476/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ans = (n+1) / 2;
    if(ans%m)
    ans+=(m-(ans%m));
    if(ans>n) ans=-1;
    cout << ans;
}
