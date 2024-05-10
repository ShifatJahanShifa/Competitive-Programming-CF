#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        ll n,x,y;cin>>n>>x>>y;
        vector<ll>a(x);
        for(auto &it:a) cin>>it;
        int ans=x-2;
        sort(a.begin(),a.end());
        for (int i = 0; i <x-1; i++)
        {
            if(a[i+1]-a[i]==2) ans++;
        }
        if(a[0]+n-a[x-1]==2) ans++;
        cout<<ans<<"\n";
    }
    
}
