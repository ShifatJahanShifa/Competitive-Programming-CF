#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<int>v(n),ans(n);
        for(auto &it:v) cin>>it;
        int one;
        set<int>st;
        for (int i = 0; i <n; i++)
        {
            if(v[i]==1) one=i;
            st.insert(v[i]);
        }
        vector<pair<int,int>>vp;
        for (int i = 0; i <n; i++)
        {
            if(one%2!=i%2) 
            {
                ans[i]=n+2-v[i];
                st.erase(ans[i]);
            }
            else 
            {
                vp.push_back(make_pair(v[i],i));
            }
        }
        sort(vp.begin(),vp.end(),greater<pair<int,int>>());
        int i=0;
        for(auto s:st) 
        {
            ans[vp[i].second]=s;
            i++;
        }
        for (int i = 0; i <n; i++)
        {
            cout<<ans[i]<<" \n"[i==n-1];
        }
        
    }
    
}
