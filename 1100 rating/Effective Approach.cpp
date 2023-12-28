#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,k,t;cin>>n;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    cin>>k;
    multiset<ll>b;
    for (ll i = 0; i < k; i++)
    {
        cin>>t;
        b.insert(t);
    }
    ll f=0,s=0;
    for (ll i = 0; i < n; i++)
    {
        if(b.count(v[i])) 
        {
            f+=(i+1)*b.count(v[i]);
        }    
    }
    for (ll i = n-1; i>-1; i--)
    {
        if(b.count(v[i])) 
        {
            s+=(n-i)*b.count(v[i]); 
        }
    }
    cout<<f<<" "<<s<<"\n";
}
