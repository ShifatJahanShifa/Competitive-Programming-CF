#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;ll d;cin>>n>>d;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    ll ans=0;
    int l=0,r=2;
    map<int,int>mp;
    
    for (int i = 2; i <n; i++)
    {
        if((v[i]-v[l])<=d) 
        {
            mp[l]=i;
        }
        else 
        {
            l++;
            i-=2;
        }
    }
    // rest
    for (int i = l+1; i <n; i++)
    {
        mp[i]=n-1;
    }
    for(auto it:mp)
    {
        ll a=it.first;
        ll b=it.second;
            // cout<<a<<" "<<b<<"\n";
        
        if((b-a)>=2) 
        {
            // cout<<a<<" "<<b<<"\n";
            ll mn=abs(a-b);
            ans+=(mn*(mn-1LL))/2LL;
        }
    }
    cout<<ans<<"\n";
}


