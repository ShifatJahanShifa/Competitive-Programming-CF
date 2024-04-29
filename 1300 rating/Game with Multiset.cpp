#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

int main()
{
    int m;cin>>m;
    map<ll,ll>mp,work;
    // prestore
    mp[0]=1LL;
    for (ll i = 1; i <30LL; i++)
    {
        mp[i]=(1LL<<i);
    }

    ll t,v;
    for (int i = 0; i <m; i++)
    {
        cin>>t>>v;
        if(t==1) 
        {
            work[mp[v]]++;
        }
        else
        {
            for (ll i =29LL; i>-1; i--)
            {
                if(mp[i]<=v and v!=0) 
                {
                    if(work[mp[i]]) 
                    {
                        v-=min(work[mp[i]],v/mp[i])*mp[i];
                    }
                }
            }
            v ? cout<<"NO\n":cout<<"YES\n";
        }
    }
    
}
