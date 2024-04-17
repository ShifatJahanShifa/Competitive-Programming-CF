#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n; ll m,k;cin>>n>>m>>k;
        vector<ll>v(n);
        for(auto &it:v) cin>>it;
        sort(v.begin(),v.end());
        ll ans=0, inflation=0;
        for (int i = 0; i <n; i++)
        {
            ll niteHobe=min(m,k);
            ans+=(niteHobe*v[i])+(niteHobe*inflation);
            k-=niteHobe;
            inflation+=niteHobe;
        }
        cout<<ans<<"\n";
    }
    
} 

// oo1  110
