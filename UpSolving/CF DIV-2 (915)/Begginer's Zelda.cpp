#include <bits/stdc++.h>
using namespace std;
typedef int long long llt;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;cin>>n;
        map<int,int>mp;
        int u,v;
        for (int i = 1; i <n; i++)
        {
            cin>>u>>v;
            mp[u]++,mp[v]++;
        }
        int ans=1,cnt=0;
        for (int i = 1; i <=n; i++)
        {
            cnt+=max(0,mp[i]-2);
        }
        cnt++;
        ans+=(cnt/2);
        cout<<ans<<"\n";
    }
}
