#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n),cnt(n);
        for(auto &it:v) cin>>it;
        map<int,int>mp;
        for (int i = 0; i <n; i++)
        {
            mp[v[i]]++;
        }
        auto idx=*(mp.begin());
        int cur=0,ans=0,prev=idx.first-1;
        for(auto it:mp)
        {
            if(it.first!=(prev+1)) 
            {
                cur=0;
                ans+=(it.second-cur);
                cur=it.second;
            }
            else
            {
                if(it.second>cur)
                {
                    ans+=(it.second-cur);
                    cur=it.second;
                }
                cur=it.second;
            }
            prev=it.first;
        }
        cout<<ans<<"\n";
    }
}

