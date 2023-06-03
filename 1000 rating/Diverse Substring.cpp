link: https://codeforces.com/problemset/problem/1073/A

my solution: 
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;cin>>n;
    string s,ans;
    cin>>s;
    bool ok=false;
    for (int i = 1; i <n; i++)
    {
        if(s[i]!=s[i-1]) 
        {
            ok=true;
            ans+=s[i-1];
            ans+=s[i];
            break;
        }
    }
    if(ok) cout<<"YES\n"<<ans<<"\n";
    else puts("NO");
}
