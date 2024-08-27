#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n; cin>>n;
        vector<ll>v(n),x;
        for(auto &it:v) cin>>it;
        int operation=0;
        while (1)
        {
            sort(v.begin(),v.end());
            ll mini=v[0],maxi=v[n-1];
            ll mid=mini+(maxi-mini)/2LL;
            for (int i = 0; i <n; i++)
            {
                v[i]=abs(v[i]-mid);
            }
            x.push_back(mid);          
            operation++;
            if(operation==40) break;  
        }
        bool ok=true;
        for (int i = 0; i <n; i++)
        {
            if(v[i]) 
            {
                ok=false;
                break;
            }
        }
        if(ok) 
        {
            cout<<x.size()<<"\n";
            for (int i = 0; i <x.size(); i++)
            {
                cout<<x[i]<<" ";
            }
            cout<<"\n";
        }
        else cout<<"-1\n";
    }
    
}
