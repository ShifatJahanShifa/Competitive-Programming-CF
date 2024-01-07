#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        ll n;cin>>n;
        vector<ll>v(n),pre(n);
        vector<int>cnt(n,0);
        for (int i = 0; i <n; i++)
        {
            cin>>v[i];
        }
        if(n==1) cout<<v[0]<<"\n";
        else{pre[0]=v[0];
        if(v[0]&1) cnt[0]=1;
        for (int i = 1; i <n; i++)
        {
            pre[i]=pre[i-1]+v[i];
            if(v[i]&1) cnt[i]=cnt[i-1]+1;
            else cnt[i]=cnt[i-1];
        }
        cout<<v[0]<<" ";
        for (int i = 1; i <n; i++)
        {
            ll temp=pre[i]-(cnt[i]/3);
            if(cnt[i]%3==1) temp--;
            cout<<temp<<" ";
        }
        puts("");
        }
    }
}

