#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;cin>>n;
    map<pair<int,int>,int>mp;
    int a,b;
    for (int i = 0; i <n; i++)
    {
        cin>>a>>b;
        mp[(make_pair(a,b))]++;
    }
    int ans=0;
    for(auto it:mp)
    {
        ans=max(ans,it.second);
    }
    cout<<ans<<"\n";
}
