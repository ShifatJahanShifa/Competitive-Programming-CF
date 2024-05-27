#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m;cin>>n;
        vector<int>v(n);
        for(auto &it:v) cin>>it;
        int pos=-1;
        int mini=INT_MAX,maxi=INT_MIN;
        for (int i = 0; i <n-1; i++)
        {
            if(v[i]>v[i+1]) 
            {
                pos=i+1;
                mini=min(mini,v[i]);
                break;
            }
            mini=min(mini,v[i]);
        }
        if(pos==-1) 
        {
            cout<<"Yes\n";
            continue;
        }
        for (int i = pos; i <n-1; i++)
        {
            if(v[i]>v[i+1]) 
            {
                pos=n;
                break;
            }
            maxi=max(maxi,v[i]);
        }
        if(pos==n) cout<<"No\n";
        else 
        {
            maxi=max(maxi,v[n-1]);
            if(mini<maxi) cout<<"No\n";
            else cout<<"Yes\n";
        }
    }
}
