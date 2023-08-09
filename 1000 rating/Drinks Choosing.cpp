#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    int ans=0,v;
    map<int,int>mp;
    for (int i = 0; i <n; i++)
    {
        cin>>v;
        mp[v]++;
    }
    int oddCount=0,yetK=0;
    for(auto it:mp)
    {
        if(it.second&1) 
        {
            oddCount++;
            ans+=(it.second-1);
        }
        else 
        {
            ans+=it.second;
        }
    }
    ans+=(oddCount+1)/2;
    cout<<ans<<"\n";
}
