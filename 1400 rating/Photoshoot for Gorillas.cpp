#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m,k;cin>>n>>m>>k;
        ll w;
        cin>>w;
        vector<ll>v(w),p;
        for(auto &it:v) cin>>it;
        for (int i = 0; i <n; i++)
        {
            for (int j = 0; j<m; j++)
            {
                ll val=(min(i,n-k)-max(-1,i-k))*(min(j,m-k)-max(-1,j-k));
                p.push_back(val*1LL);
            }
        }
        sort(p.begin(),p.end(),greater<ll>());
        sort(v.begin(),v.end(),greater<ll>());
        ll ans=0;
        for (int i = 0; i <w; i++)
        {
            ans+=(p[i]*v[i]);
        }
        cout<<ans<<"\n";
    }
}


//  4 3 5 3 4 5
