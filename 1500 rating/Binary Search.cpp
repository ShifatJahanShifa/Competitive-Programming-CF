#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007;
vector<ll>fact(1005,1LL);

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
    if(n<r) return 0;
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

void factorial()
{
    ll fac=1;
    for (ll i = 2; i <=1004; i++)
    {
        fact[i]=(fact[i-1]*i)%mod;
        // fac=(fac*i)%mod;
    }
    // return fac;
}

int main()
{
    factorial();
    int n,x,k;cin>>n>>x>>k;
    int big=0,sml=0;
    int left=0,right=n;
    while (left<right)
    {
        int m=(left+right)/2;
        if(m<=k) 
        {
            if(m!=k) sml++;
            left=m+1;
        }
        else
        {
            right=m;
            big++;
        }
    }
    int other=n-1-big-sml;
    int b=n-x;
    int sm=x-1;
    ll f=ncr(b,big);
    f=(f*fact[big])%mod;
    ll s=ncr(sm,sml);
    s=(s*fact[sml])%mod;
    ll t=fact[other];
    s=(s*f)%mod;
    t=(s*t)%mod;
    // cout<<ncr(x-1,pos-1)factorial(n-1)<<"\n";
    cout<<t<<"\n";
}

