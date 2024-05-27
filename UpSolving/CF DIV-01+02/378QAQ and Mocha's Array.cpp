#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m;cin>>n;
        vector<ll>v(n);
        for(auto &it:v) cin>>it;
        sort(v.begin(),v.end());
        ll a=v[0],b=-1;
        for (int i = 1; i <n; i++)
        {
            if(v[i]%a)
            {
                b=v[i];
                break;
            }
        }
        if(b==-1) 
        {
            cout<<"Yes\n";
            continue;
        }
        bool ok=true;
        for (int i = 0; i <n; i++)
        {
            if(v[i]%a and v[i]%b) 
            {
                ok=false;
                break;
            }
        }
        ok? cout<<"Yes\n":cout<<"No\n";
    }
}


// 4 7 11 24
