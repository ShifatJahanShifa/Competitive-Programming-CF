#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        ll n,m;cin>>n>>m;
        vector<ll>a(n),b(n),suffix(n+1,0);
        for(auto &it:a) cin>>it;
        for(auto &it:b) cin>>it;
        // suffix sum
        suffix[n-1]=b[n-1];
        for (int i = n-2; i>-1; i--)
        {
            suffix[i]=suffix[i+1]+b[i];
        }
        ll till=0;int pos=n;
        for (int i = n-1; i>=m; i--)
        {
            if(a[i]<b[i]) 
            {
                till+=a[i];
                if(i!=n-1)
                till+=suffix[i+1]-suffix[pos];
                pos=i;
            }   
        }
        ll ans=till;
        //cout<<ans<<"\n";
        if(ans==0)
        {
            ll init=a[m-1];
            if(n!=m) init+=suffix[m];
            ans=init;
            for (int i = m-2; i>-1; i--)
            {
                ll temp=a[i]+suffix[i+1];
                //cout<<temp<<" hh\n";
                ans=min(ans,temp);
            }
        }
        else 
        {
            ll init=a[m-1];
            if(pos!=m) init+=suffix[m]-suffix[pos];
            ans=init+till;
            for (int i = m-2; i>-1; i--)
            {
                ll temp=a[i]+suffix[i+1]-suffix[pos]+till;
                ans=min(ans,temp);
            }

        }
        cout<<ans<<"\n";
    }
    
}
