#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;

int main()
{
    int T;cin>>T;
    vector<ll>sq;
    ll temp;
    for (int i = 0; ; i++)
    {
        temp=i*i;
        if(temp<=200005) 
        {
            sq.push_back(temp);
        }
        else break;
    }
    while (T--)
    {
        ll n,m;cin>>n;
        vector<ll>ans(n,-1);
        int pos=-1;
        for (ll i = n-1; i>-1; i--)
        {
            if(pos==-1) 
            {
                pos=lower_bound(sq.begin(),sq.end(),i)-sq.begin();
            }
            if(ans[i]!=-1) continue;
            ll dif=sq[pos]-i;

            if(dif>=n or ans[dif]!=-1) 
            {
                pos=lower_bound(sq.begin(),sq.end(),i)-sq.begin();
            }
            dif=sq[pos]-i;
            ans[i]=dif;
            if(ans[dif]!=-1) continue;
            ans[dif]=i;
            //cout<<ans[i]<<" ";
        }

        for (int i = 0; i <n; i++)
        {
            cout<<ans[i]<<" \n"[i==n-1];
        }
    }
} 
