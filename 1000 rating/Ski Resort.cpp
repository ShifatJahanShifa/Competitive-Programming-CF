#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n,k,q;cin>>n>>k>>q;
        vector<int>v(n);
        for(auto &it:v) cin>>it;
        vector<pair<int,int>>vp;
        int l=-1,r=-1;
        for (int i = 0; i <n; i++)
        {
            if(v[i]<=q) 
            {
                if(l==-1) 
                {
                    l=i;
                }
                r=i;
            }
            else if(v[i]>q and l!=-1)
            {
                vp.push_back(make_pair(l,r));
                l=-1,r=-1;
            }
        }
        if(l!=-1) 
        {
            vp.push_back(make_pair(l,r));   
        }
        ll ans=0;
        for (int i = 0; i <vp.size(); i++)
        {
            ll len=vp[i].second-vp[i].first+1;
            if(len<k) continue;
            ll comb=len-k+1;
            ans+=((comb*(comb+1))/2);
        }
        cout<<ans<<"\n";
    }
} 
