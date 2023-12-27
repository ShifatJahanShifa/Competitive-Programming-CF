#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>store;
const ll d=1e18+20;


int main()
{
    int T;
    cin >> T;
    //pre();
    while (T--)
    {
        ll n,ans;
        cin >> n;
        ll l=1,r=2e9;
        ll m=0,check;
        while (l+1<r)
        {
            m=l+(r-l)/2;
            check=(m*(m+1LL))/2;
            //cout<<m<<"\n";
            if(check>n) r=m;
            else l=m;
        }
        ans=l;
        //cout<<ans<<" here\n";
        ll com=(ans*(ans+1))/2;
        if(com!=n) 
        {
            ans+=(n-com);
        }
        ans++;
        cout<<ans<<"\n";
    }
}
