#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        ll ans=0;
        ll l=n-m,r=n+m;
        if(l<=0) l=0;
        for (ll i = 0; i < 32; i++)
        {
            if(n&(1LL<<i)) ans|=1LL<<i;
            else 
            {
                ll power=1LL<<i;
                if(power<(r-l+1)) ans|=1LL<<i;
                else if(power>=(r-l+1)) 
                {
                    if((l&1LL<<i) or (r&1LL<<i)) ans|=1LL<<i;
                }
            }
        }
        cout<<ans<<"\n";
    }
}

// 0 0
// 0 1
// 0 2
// 1 0
// 5 2
// 10 1
// 20 3
// 1145 14
// 19198 10
