#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
    int n,m;cin>>n>>m;
    int ans=0;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    sort(v.begin(),v.end());
    if(v[0]>=0) cout<<"0\n";
    else
    {
        for (int i = 0; i < m; i++)
        {
            if(v[i]>0) break;
            ans+=abs(v[i]);
        }
        cout<<ans<<"\n";
    }
}
