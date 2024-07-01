#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll x,y,k;cin>>x>>y>>k;
        while (k and x!=1LL)
        {
            ll take=((x/y)+1)*y-x;
            take=min(take,k);
            x+=take;
            while (x%y==0)
            {
                x/=y;
            }
            k-=take;
        }
        
        cout<<x+k%(y-1)<<"\n";
    }
}
