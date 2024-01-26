#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,d,s;cin>>n;
        map<int,vector<int>>mp;
        while (n--)
        {
            cin>>d>>s;
            s--;
            s>>=1;
            mp[d].push_back(s);
        }
        int now=INT_MAX;
        for(auto it:mp)
        {
            int mini=*min_element(it.second.begin(),it.second.end());
            now=min(now,(it.first+mini));
        }
        cout<<now<<"\n";
    }
}
