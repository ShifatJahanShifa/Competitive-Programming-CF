#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    priority_queue<ll>pq;
    map<char,ll>mp;
    for (int i = 0; i <n; i++)
    {
        mp[s[i]]++;
    }
    for(auto it:mp) 
    {
        pq.push(it.second);
    }
    ll ans=0;
    for (int i = 0; i < k; i++)
    {
        ll temp=pq.top();
        ll t=k-i;
        ll mini=min(t,temp);
        ans+=(mini*mini);
        i=mini+i-1;
        pq.pop();
    }
    cout<<ans<<"\n";
}
