#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        ll a,b;cin>>a>>b;
        if(b%a==0) cout<<b*(b/a)<<"\n";
        else cout<<(a*b)/__gcd(a,b)<<"\n";
    }
}

