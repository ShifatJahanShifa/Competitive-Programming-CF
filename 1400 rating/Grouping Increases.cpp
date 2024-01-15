#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<int>v(n);
        for(auto &it:v) cin>>it;
        int first=INT_MAX,second=INT_MAX;
        int ans=0;
        for (int i = 0; i <n; i++)
        {
            if(second<first) swap(first,second);
            if(v[i]<=first) first=v[i];
            else if(v[i]<=second) second=v[i];
            else 
            {
                ans++;
                first=v[i];
            }
        }
        
        cout<<ans<<"\n";
    }
}
