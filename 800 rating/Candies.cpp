#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin>>n;
        if(n&1) 
        {
            int ans=log10(n)/log10(2);
            cout<<ans<<"\n";
            cout<<2<<" ";
            int power=(1<<ans);
            int mid;
            while (power!=2)
            {
                mid=power>>1;
                if((n%power)<mid) cout<<1<<" ";
                else cout<<2<<" ";
                power>>=1;
            }
            puts("");
        }
        else puts("-1");
    }
}
