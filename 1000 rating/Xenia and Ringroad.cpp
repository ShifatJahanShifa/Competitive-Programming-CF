#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
    int n,m;cin>>n>>m;
    ll ans=0;
    vector<ll>v(m);
    for(auto &it:v) cin>>it;
    ll prev=1;
    
    for (int i = 0; i <m; i++)
    {
        if(v[i]>=prev) 
        {
            ans+=v[i]-prev;
            prev=v[i];
        }
        else
        {
            ans+=(v[i]-prev+n);
            prev=v[i];
        }
    }
    cout<<ans<<"\n";
}
