#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007;
vector<ll>fact(1000005,1LL);

ll BE(ll a,ll b)
{
    ll ans=1LL;
    while(b)
    {
        if(b%2LL) ans*=a;
        ans%=mod;
        a*=a;
        a%=mod;
        b/=2LL;
    }
    return ans;
}


ll finalRes(ll a,ll b)
{
    if(a>=b) return (a-b)%mod;
    else return (mod+mod+a-b)%mod;
}

ll ncr(ll n,ll r)
{
    ll ans=1LL;
    // for (ll i = 0; i <r; i++)
    // {
    //     ans=(ans*(n-i))%mod;
    //     ans=(ans*BE(i+1LL,mod-2LL))%mod;
    // }
    // return ans;

    ll x=fact[n];
    ll y=fact[r];
    ll z=fact[n-r];
    ll p=(z*y)%mod;
    ans=(x*BE(p,mod-2))%mod;
    return ans;
}

ll factorial(ll n)
{
    ll fac=1;
    for (ll i = 2; i <=n; i++)
    {
        // fact[i]=(fact[i-1]*i)%mod;
        fac=(fac*i)%mod;
    }
    return fac;
}

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<ll>v(n);
        for(auto &it:v) cin>>it;
        sort(v.begin(),v.end());
        bool ok=true;
        for (int i = 1; i <n; i++)
        {
            if((v[0]&v[i])!=v[0]) 
            {
                ok=false;
                break;
            }
        }
        if(ok)
        {
            ll eq=1;
            for (int i = 1; i <n; i++)
            {
                if(v[i]==v[0]) eq++;
                else break;
            }
            ll noteq=(n-eq)*1LL;
            ll f=((eq*(eq-1LL))/2LL);
            ll s=2LL;
            s=(f*s)%mod;
            ll t=factorial(n-2);
            t=(t*s)%mod;
            cout<<t<<"\n";
        }
        else cout<<"0\n";
    }
    
}

