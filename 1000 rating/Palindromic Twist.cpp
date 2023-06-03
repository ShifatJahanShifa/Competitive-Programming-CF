link: https://codeforces.com/problemset/problem/1027/A

my solution: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        bool ok=true;
        for (int i = 0; i <n/2; i++)
        {
            if(s[i]!=s[n-i-1])
            {
                int dif=abs(s[i]-s[n-i-1]);
                if(dif!=2) 
                {
                    ok=false;
                    break;
                }
            }
        }
        if(ok) puts("YES");
        else puts("NO");
    }
}
