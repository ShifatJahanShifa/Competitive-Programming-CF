#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;cin>>n;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    sort(v.begin(),v.end());
    int ans=0;
    int l=0,r;
    r=upper_bound(v.begin(),v.end(),v[0])-v.begin();
    map<int,int>mp;
    
    for (int i = 0; i <n; i++)
    {
        if(r>=n) break;
        if(v[r]>v[i]) 
        {
            ans++;
            r++;
        }
        else
        {
            r=upper_bound(v.begin(),v.end(),v[i])-v.begin();
            if(r>=n) break;
            ans++;
            r++;
        }
    }
    cout<<ans<<"\n";
}


