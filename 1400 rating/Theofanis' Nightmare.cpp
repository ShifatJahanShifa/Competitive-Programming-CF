#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while(T--)
    {
        int n; ll k;
        cin>>n;
        vector<ll>v(n),suf(n+1,0);
        for(auto &it:v) cin>>it;
        ll ans=0;
        for (int i = n-1; i>-1; i--)
        {
            suf[i]=suf[i+1]+v[i];
        }
        ans=suf[0];
        for (int i = 1; i <n; i++)
        {
            if(suf[i]>0)
            ans+=suf[i];
        }
        cout<<ans<<"\n";
        
    }
}
