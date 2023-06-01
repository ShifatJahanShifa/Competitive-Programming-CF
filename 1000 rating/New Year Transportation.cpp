link: https://codeforces.com/problemset/problem/500/A

my solution: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    arr[0] = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 1;
    bool ok = false;
    for (; i < n;)
    {
        if (i == m)
        {
            ok = true;
            break;
        }
        i = i + arr[i];
    }
    if (i == m)
    {
        ok = true;
    }
    if (ok)
        puts("YES");
    else
        puts("NO");
}
