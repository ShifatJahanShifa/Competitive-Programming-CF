#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;

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
        ll n,k; cin>>n>>k;
        vector<ll>v(n);
        for(ll &it:v) cin>>it;
        sort(v.begin(),v.end());
        vector<pair<ll,ll>>vp;
        ll maxi=v[n-1];
        for (int i = 0; i <n-1; i++)
        {
            ll dif=maxi-v[i];
            dif=(dif/(k+k));
            v[i]+=(dif*(k+k));
            ll last=v[i]+(k-1LL);
            if(last<maxi) 
            {
                v[i]+=k+k;
                last=v[i]+(k-1LL);
            }
            vp.push_back(make_pair(v[i],last));
        }
        vp.push_back(make_pair(v[n-1],v[n-1]+k-1LL));
        ll l=-1,r=LLONG_MAX;
        for (int i = 0; i <n; i++)
        {
            l=max(l,vp[i].first);
            r=min(r,vp[i].second);
        }
        if(r<l) cout<<"-1\n";
        else cout<<l<<"\n";
    }
    
}
