#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,w;
    cin>>n>>w;
    vector<int>v(n),ans(n);
    for(auto &it:v) cin>>it;
    int mids=0;
    for (int i = 0; i <n; i++)
    {
        mids+=(v[i]+1)/2;
    }
    if(w<mids) cout<<"-1\n";
    else 
    {
        vector<pair<int,int>>vp;
        int surplus=w-mids;
        for (int i = 0; i <n; i++)
        {
            vp.push_back(make_pair(v[i],i));
        }
        sort(vp.begin(),vp.end(),greater<pair<int,int>>());
        for (int i = 0; i <n; i++)
        {
            auto it=vp[i];
            int idx=it.second;
            int val=it.first;
            ans[idx]=(val+1)/2;
            if(surplus>0) 
            {
                int canTake=val-ans[idx];
                int mini=min(canTake,surplus);
                ans[idx]+=mini;
                surplus-=mini;
            }
        }
        if(surplus>0) cout<<"-1\n";
        else 
        {
            for (int i = 0; i <n; i++)
            {
                cout<<ans[i]<<" ";
            }
            puts("");
        }
    }
}
