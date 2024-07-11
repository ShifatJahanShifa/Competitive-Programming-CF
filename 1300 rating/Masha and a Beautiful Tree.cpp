#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int m;cin>>m;
        vector<pair<int,int>>vp;
        int u;
        for (int i = 0; i <m; i++)
        {
            cin>>u;
            vp.push_back(make_pair(u,u));
        }
        ll ans=0;
        int round=log2(m);
        bool ok=false;
        for (int i = 1; i <=round; i++)
        {
            int l=(1<<i)-1;
            vector<pair<int,int>>temp;
            for (int j = 0; j <vp.size(); j+=2)
            {
                auto f=vp[j];
                auto s=vp[j+1];
                int mini=min(f.first,s.first);
                int maxi=max(f.second,s.second);
                if((maxi-mini)!=l) 
                {
                    // cout<<f.first<<" "<<s.first<<" fs\n";
                    ok=true;
                    break;
                }
                if(f.first!=mini) 
                {
                    ans++;
                }
                temp.push_back(make_pair(mini,maxi));
            }
            if(ok) break;
            vp=temp;
        }
        if(ok) cout<<"-1\n";
        else 
        {
            cout<<ans<<"\n";
        }
    }
    
}


