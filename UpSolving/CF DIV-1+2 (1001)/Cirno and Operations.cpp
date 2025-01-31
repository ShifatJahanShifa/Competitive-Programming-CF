#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

map<vector<ll>,ll>dp;

ll solve(vector<ll>v)
{
    ll ans=0;
    ll sum=0;
    if(v.size()==1) 
    {
        return v[0];
    }
    if(dp.find(v)!=dp.end()) return dp[v];
    for (int i = 0; i <v.size(); i++)
    {
        sum+=v[i];
    }
    vector<ll>temp,temp1;
    for (int i = 1; i <v.size(); i++)
    {
        temp.push_back(v[i]-v[i-1]);
        temp1.push_back(v[i-1]-v[i]);
    }
    ll ret2=0;
    ret2=solve(temp);
    reverse(temp1.begin(),temp1.end());
    ll ret1=0;
    ret1=solve(temp1);
    ans=max({sum,ret1,ret2});
    dp[v]=ans;
    return ans;
}

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,k;cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        cout<<solve(v)<<"\n";
    }
}
