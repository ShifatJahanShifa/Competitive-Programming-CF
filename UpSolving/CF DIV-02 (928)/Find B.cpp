#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,q; cin>>n>>q;
        vector<ll>v(n),prefix(n+1,0),cnt(n+1,0);
        for(auto &it:v) cin>>it;
        for (int i = 0; i <n; i++)
        {
            prefix[i+1]=prefix[i]+v[i];
            if(v[i]==1) 
            {
                cnt[i+1]=cnt[i]+1;
            }
            else 
            {
                cnt[i+1]=cnt[i];
            }
        }
        int l,r;
        while (q--)
        {
            cin>>l>>r;
            if(l==r) 
            {
                cout<<"NO\n";
                continue;
            }
            int one=cnt[r]-cnt[l-1];
            if(one)
            {
                int nonOne=(r-l)+1-one;
                ll sum=prefix[r]-prefix[l-1]-nonOne;
                if(sum>=(one*2LL)) cout<<"YES\n";
                else cout<<"NO\n";
            }
            else 
            {
                cout<<"YES\n";
            }
        }
        
    }
}
