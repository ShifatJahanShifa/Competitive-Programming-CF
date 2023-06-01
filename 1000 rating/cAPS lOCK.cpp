link: https://codeforces.com/contest/131/problem/A

solution: 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, ans;
    cin >> s;
    bool ok = false;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
        {
            ok = true;
            break;
        }
    }
    if (ok)
    {
        cout << s;
    }
    else
    {
        char ch = s[0],ch1;
        if(ch>='a' and ch<='z')
        ch1 = (ch & (~(1 << 5)));
        else ch1=(ch | (1 << 5));
        ans += ch1;
        for (int i = 1; i < s.size(); i++)
        {
            ch = s[i];
            ch1 = (ch | (1 << 5));
            ans += ch1;
        }
        cout << ans;
    }
}
