#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        ll a,b,m;cin>>a>>b>>m;
        ll ans=0;
        ans+=(m/a);
        ans+=(m/b);
        ans+=2;
        cout<<ans<<"\n";
    }
}
