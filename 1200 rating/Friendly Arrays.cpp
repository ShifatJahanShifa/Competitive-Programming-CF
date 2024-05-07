#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m;cin>>n>>m;
        vector<ll>a(n),b(m);
        for(auto &it:a) cin>>it;
        for(auto &it:b) cin>>it;
        ll maxi=0,mini=0;
        ll given=0;
        for (int i = 0; i <n; i++)
        {
            given^=a[i];
        }
        if(n&1) 
        {
            mini=given;
            maxi=mini;
            for (int i = 0; i <m; i++)
            {
                maxi=(maxi|b[i]);
            }
        }
        else 
        {
            maxi=given;
            mini=maxi;
            for (int i = 0; i <m; i++)
            {
                for (ll j= 0; j <32; j++)
                {
                    if(((1LL<<j)&b[i])) 
                    {
                        if(mini&(1LL<<j)) mini^=(1LL<<j);
                    }
                }
                
            }
        }
        cout<<mini<<" "<<maxi<<"\n";
    }
    
}
