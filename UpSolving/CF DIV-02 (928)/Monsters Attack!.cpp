#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n; ll k;cin>>n>>k;
        vector<ll>v(n),p(n);
        for(auto &it:v) cin>>it;
        for(auto &it:p) cin>>it;
        for (int i = 0; i <n; i++)
        {
            p[i]=abs(p[i]);
        }
        vector<int>order(n);
        iota(order.begin(),order.end(),0);
        sort(order.begin(),order.end(), [&] (int l,int r){
            return p[l]<p[r];
        });
        bool ok=true;
        ll sum=0;
        for (int i = 0; i <n; i++)
        {
            sum+=v[order[i]];
            ll sec=p[order[i]]*k;
            if(sum>sec) 
            {
                ok=false;
                break;
            }
        }
        ok ? cout<<"YES\n" : cout<<"NO\n";
    }
    
}
