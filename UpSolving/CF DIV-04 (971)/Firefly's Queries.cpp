#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// const ll mod=1000000007;
// ll BE(ll a,ll b) 
// {
//     ll ans=1LL;
//     while(b)
//     {
//         if(b%2LL) ans*=a;
//         ans%=mod;
//         a*=a;
//         a%=mod;
//         b/=2LL;
//     }
//     return ans;
// }

int main()
{
    int T;cin>>T;
    while (T--)
    {
        ll n,k;cin>>n>>k;
        vector<ll>v(n),pre(1);
        for(auto &it:v) 
        {
            cin>>it;
            pre.push_back(pre.back()+it);
        }
        for (int i = 0; i <n; i++)
        {
            pre.push_back(pre.back()+v[i]);
        }
        ll l,r;
        while (k--)
        {
            cin>>l>>r;
            l--,r--;
            ll c1=l/n, c2=r/n;
            l%=n,r%=n;
            ll ans=pre[n]*(c2-c1+1LL)-(pre[c1+l]-pre[c1])-(pre[c2+n]-pre[c2+r+1]);
            cout<<ans<<"\n";
        }
        
    }
}
