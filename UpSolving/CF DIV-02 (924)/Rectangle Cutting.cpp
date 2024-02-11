#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int a,b;cin>>a>>b;
        if(a%2 and b%2) cout<<"NO\n";
        else if(a%2==0 and b%2==0) cout<<"YES\n";
        else 
        {
            int mini=min(a,b);
            int maxi=max(a,b);
            if(maxi&1) cout<<"YES\n";
            else 
            {
                if(maxi==(mini*2)) cout<<"NO\n";
                else cout<<"YES\n";
            }
        }
    }
}
