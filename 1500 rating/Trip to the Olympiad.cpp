#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int l,r;cin>>l>>r;
        int ans=0,a=0,b=0,c=0;
        for (int i = 30; i>-1; i--)
        {
            int aa=l&(1<<i);
            int bb=r&(1<<i);
            if(aa==bb)
            {
                ans+=bb&(1<<i);
            }
            else 
            {
                a=(ans+(1<<i));
                b=a-1;
                break;
            }
        }
        while (l<=r)
        {
            if(l!=a and l!=b) 
            {
                c=l;
                break;
            }
            l++;
        }
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
}
