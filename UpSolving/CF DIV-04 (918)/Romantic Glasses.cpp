#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<ll>v(n);
        for(auto &it:v) cin>>it;
        map<ll,ll>mp;
        ll odd=0,even=0;
        bool ok=false;
        mp[0]++;
        for (int i = 0; i <n; i++)
        {
            if(i&1) even+=v[i];
            else odd+=v[i];
            ll temp=odd-even;
            if(mp[temp]) 
            {
                ok=true;
                break;
            }
            mp[temp]++;
        }
        ok ? cout<<"YES\n":cout<<"NO\n";
    }
    
}
