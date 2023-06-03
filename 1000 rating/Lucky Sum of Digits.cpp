link: https://codeforces.com/contest/109/problem/A

my solutiuon: 

#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 4 + 7;
    string ans;
    if (n % 7)
    {
        while ((n % 7) and n > 0)
        {
            ans += '4';
            n -= 4;
        }

        while (n > 0)
        {
            ans += '7';
            n -= 7;
        }
    }
    else
    {
        while (n)
        {
            ans += '7';
            n -= 7;
        }
    }

    if (n < 0)
        puts("-1");
    else
        cout << ans << "\n";
}
