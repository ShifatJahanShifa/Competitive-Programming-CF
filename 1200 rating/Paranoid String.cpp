#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m;cin>>n;
        string a,b;cin>>a;
        ll ans=n;
        for (int i = 1; i<n; i++)
        {
            if(a[i]!=a[i-1]) ans+=i*1LL;
        }
        cout<<ans<<"\n";
    }
} 
