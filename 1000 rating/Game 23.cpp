problem link: https://codeforces.com/problemset/problem/1141/A

my solution: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (m % n)
        puts("-1");
    else if (m == n)
        puts("0");
    else
    {
        int ans = 0,check=m/n;
        while (!(check % 2))
        {
            check/=2;
            ans++;
        }
        while (!(check%3))
        {
            check/=3;
            ans++;
        }
        check==1 ? cout << ans : cout << -1;
    }
}
