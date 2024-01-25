#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        ll n,x,y;cin>>n>>x>>y;
        ll lcm=(x*y)/__gcd(x,y);
        lcm=n/lcm;
        x=n/x;
        y=n/y;
        x-=lcm;
        y-=lcm;
        ll sumf=(n*(n+1))/2-((n-x)*(n-x+1))/2;
        ll suml=(y*(y+1))/2;
        cout<<sumf-suml<<"\n";
    }
    
}
