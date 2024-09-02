#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n; ll a,b; cin>>n>>a>>b;
        vector<ll>v(n);
        for(auto &it:v) cin>>it;
        ll gcd=__gcd(a,b);
        for (int i = 0; i <n; i++)
        {
            v[i]=v[i]%gcd;
        }
        sort(v.begin(),v.end());
        ll ans=v[n-1]-v[0];
        for (int i = 1; i <n; i++)
        {
            ll dif=v[i-1]+gcd-v[i];
            ans=min(ans,dif);
        }
        cout<<ans<<"\n";
    }
}


//  4 3 5 3 4 5
