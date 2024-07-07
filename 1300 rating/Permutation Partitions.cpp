#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=998244353;


int main()
{
    // factorial();
    ll n,k;cin>>n>>k;
    map<ll,ll>mp;
    int v;
    for (int i = 0; i <n; i++)
    {
        cin>>v;
        mp[v]=i;
    }
    
    ll ans=(n*(n+1LL))/2LL;
    ll baad=((n-k)*(n-k+1LL))/2LL;
    ans-=baad;
    ll total=1;
    vector<ll>idx;
    for (int i = 0; i <k; i++)
    {
        idx.push_back(mp[n-i]);
    }
    sort(idx.begin(),idx.end());
    for (int i = 1; i <k; i++)
    {
        total=total*(idx[i]-idx[i-1])%mod;
    }
    cout<<ans<<" "<<total<<"\n";
}

