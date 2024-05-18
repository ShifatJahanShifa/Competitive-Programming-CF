#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool gf(int k,vector<int>v)
{
    int val=0;
    map<int,int>mp;
    for (int i = 0; i <k; i++)
    {
        for (int j = 0; j<21; j++)
        {
            if(v[i]&(1<<j)) mp[j]++;
        }
    }
    for(auto it:mp) 
    {
        if(it.second)
        {
            val|=(1<<it.first);
        }
    }
    for (int i = k; i <v.size(); i++)
    {
        for (int j = 0; j<21; j++)
        {
            if(v[i-k]&(1<<j)) mp[j]--;
            if(v[i]&(1<<j)) mp[j]++;
        }
        int temp=0;
        for(auto it:mp) 
        {
            if(it.second)
            {
                temp|=(1<<it.first);
            }
        }
        if(temp!=val) return false;
    }
    return true;
}

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<int>v(n);
        for(auto &it:v) cin>>it;
        int low=1,high=n,ans=0;
        while (low<=high)
        {
            int mid=low+((high-low)/2);
            if(gf(mid,v)) 
            {
                high=mid-1;
                ans=mid;
            }
            else low=mid+1;
        }
        cout<<ans<<"\n";
    }
}
