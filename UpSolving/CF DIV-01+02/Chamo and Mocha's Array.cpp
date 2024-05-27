#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m;cin>>n;
        vector<ll>v(n);
        for(auto &it:v) cin>>it;
        ll ans=INT_MIN;
        if(n==2)
        {
            for (int i = 0; i <n-1; i++)
            {
                ll temp=min(v[i],v[i+1]);
                ans=max(ans,temp);
            }
            cout<<ans<<"\n";
        }
        else 
        {
            for (int i = 0; i <n-2; i++)
            {
                vector<ll>temp={v[i],v[i+1],v[i+2]};
                sort(temp.begin(),temp.end());
                ans=max(ans,temp[1]);
            }
            cout<<ans<<"\n";
        }
    }
}


//  4 3 5 3 4 5
