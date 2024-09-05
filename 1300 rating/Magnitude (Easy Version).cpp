#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// const ll mod=1000000007;
// ll BE(ll a,ll b) 
// {
//     ll ans=1LL;
//     while(b)
//     {
//         if(b%2LL) ans*=a;
//         ans%=mod;
//         a*=a;
//         a%=mod;
//         b/=2LL;
//     }
//     return ans;
// }

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,k;cin>>n;
        vector<ll>v(n);
        for(auto &it:v) 
        {
            cin>>it;
        }
        ll c=0; int pos=-1;
        ll mini=0,neg=0;
        for (int i = 0; i <n; i++)
        {
            mini=mini+v[i];
            if(mini<neg) 
            {
                neg=mini;
                pos=i;
            }
        }
        c=abs(neg);
        for (int i = pos+1; i <n; i++)
        {
            c=c+v[i];
        }
        cout<<c<<"\n";
    }
}
