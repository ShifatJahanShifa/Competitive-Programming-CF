#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int l,r,L,R;cin>>l>>r>>L>>R;
        if(r<L or R<l) cout<<"1\n";
        else if(l==L and R==r) cout<<r-l<<"\n";
        else if((l<=L and R<=r) or (L<=l and r<=R))
        {
            int ans=min(r-l,R-L);
            if(l==L or r==R) ans++;
            else ans+=2;
            cout<<ans<<"\n";
        }
        else 
        {
            int ans=0;
            if(L<=r and r<R) 
            {
                ans+=(r-L)+2;
            }
            else if(l<=R and R<r) 
            {
                ans+=(R-l)+2;
            }
            cout<<ans<<"\n";
        }
    }
}


