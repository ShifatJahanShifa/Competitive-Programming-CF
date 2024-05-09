#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        ll n,x,y;cin>>n>>x>>y;
        vector<ll>v(n);
        for(auto &it:v) cin>>it;
        ll xorr=0;
        for (int i = 0; i <n; i++)
        {
            xorr^=v[i];
        }
        xorr^=x;
        //cout<<xorr<<"\n";
        if((xorr%2)==(y%2)) cout<<"Alice\n";
        else cout<<"Bob\n";
    }
    
}
