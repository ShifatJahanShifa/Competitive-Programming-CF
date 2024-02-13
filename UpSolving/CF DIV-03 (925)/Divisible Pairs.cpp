#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        ll n,x,y;cin>>n>>x>>y;
        vector<ll>v(n);
        map<pair<int,int>,int>mp;
        ll ans=0;
        for (int i = 0; i <n; i++)
        {
            cin>>v[i];
            int a=v[i]%x;
            int b=v[i]%y;
            int p=(x-a)%x;
            int q=(y+b)%y;
            ans+=mp[{p,q}];
            mp[{a,b}]++;
        }
        cout<<ans<<"\n";
    }
    
}
