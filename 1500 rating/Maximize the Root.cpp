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
vector<ll>v(200005);
vector<vector<int>>graph;

ll solve(int u)
{
    ll mini=LLONG_MAX;
    for(auto vv:graph[u]) 
    {
        mini=min(mini,solve(vv));
    }
    if(u==1) return mini;
    if(mini==LLONG_MAX) return v[u];
    if(mini<=v[u]) return mini;
    ll mid=v[u]+(mini-v[u])/2LL;
    ll dif=mid-v[u];
    mini-=dif;
    mini=min(mini,mid);
    return mini;
}

int main()
{
    // cout<<"HELLO\n";
    int T;cin>>T;
    while (T--)
    {
        int n,q; cin>>n;
        v.assign(n+1,0);
        graph.assign(n+1,vector<int>());
        for (int i = 1; i <=n; i++)
        {
            cin>>v[i];
        }
        for (int i = 2; i <=n; i++)
        {
            cin>>q;
            graph[q].push_back(i);
        }
        cout<<solve(1)+v[1]<<"\n";
    }
    
}
