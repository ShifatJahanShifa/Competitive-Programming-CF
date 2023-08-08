#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;cin>>n>>m>>k;
    vector<long long int>v(n);
    for(auto &it:v) cin>>it;
    sort(v.begin(),v.end());
    long long ans=0;
    int count=(m/(k+1));
    int mod=(m%(k+1));
    ans+=(count*v[n-1]*k);
    ans+=(count*v[n-2]);
    ans+=(mod*v[n-1]);
    cout<<ans<<"\n";
}
