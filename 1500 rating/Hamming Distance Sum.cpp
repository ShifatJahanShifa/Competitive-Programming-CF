#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s,t;cin>>s>>t;
    int n=s.size(),m=t.size();
    ll len=m-n+1;
    vector<ll>pre(m+1,0LL);
    for (int i = 1; i <=m; i++)
    {
        pre[i]=pre[i-1]+(t[i-1]=='1');
    }
    ll ans=0;
    for (int i = 1; i <=n; i++)
    {
        if(s[i-1]=='0')
        {
            ll cnt=pre[m-n+i]-pre[i-1];
            ans+=cnt;
        }
        else 
        {
            ll cnt=pre[m-n+i]-pre[i-1];
            cnt=len-cnt;
            ans+=cnt;
        }
    }
    cout<<ans<<"\n";
}


