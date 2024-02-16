#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int k,x;ll a,sum=0;cin>>k>>x>>a;
        int need=0;bool ok=true;
        for (int i = 0; i <=x; i++)
        {
            need=sum/(k-1)+1;
            sum+=need;
            a-=need;
            if(a<0) 
            {
                ok=false;
                break;
            }
        }
        ok ? cout<<"YES\n":cout<<"NO\n";
    }
    
}
