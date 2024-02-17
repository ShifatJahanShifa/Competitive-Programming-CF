#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,x;cin>>n>>x;
        vector<int>a(n),b(n),copy(n),result(n);
        for(auto &it:a) cin>>it;
        for(auto &it:b) cin>>it;
        vector<pair<int,int>>vp(n); 
        for (int i = 0; i <n; i++)
        {
            vp[i]=make_pair(a[i],i);
        }
        sort(vp.begin(),vp.end());
        for (int i = 0; i <n; i++)
        {
            copy[i]=vp[i].second;
        }
        sort(b.begin(),b.end());
        for (int i = 0; i <x; i++)
        {
            result[copy[n-x+i]]=b[i];
        }
        for (int i = x; i <n; i++)
        {
            result[copy[i-x]]=b[i];
        }
        int cnt=0; 
        for (int i = 0; i <n; i++)
        {
            if(a[i]>result[i]) cnt++;
        }
        if(cnt!=x) cout<<"NO\n";
        else 
        {
            cout<<"YES\n";
            for (int i = 0; i <n; i++)
            {
                cout<<result[i]<<" ";
            }
            puts("");
        }
    }
}

