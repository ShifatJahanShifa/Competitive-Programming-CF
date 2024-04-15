#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz=2e5+5;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        int val;
        map<int,int>mp;
        for (int i = 0; i <n; i++)
        {
            cin>>val;
            mp[val]++;
        }
        int ans=0;
        for(auto it:mp) 
        {
            if(it.second==2) ans++;
        }
        cout<<ans<<"\n";
    }
    
}
