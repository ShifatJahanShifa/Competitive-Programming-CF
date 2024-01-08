#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
    int n,k;cin>>n;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    sort(v.begin(),v.end());
    ll temp=0,ans=0;
    for (int i = n-1; i > -1; i--)
    {
        temp+=v[i];
        //cout<<temp<<"\n";
        ans+=temp;
    }
    temp-=v[n-1];
    ans+=temp;
    cout<<ans<<"\n";
}
