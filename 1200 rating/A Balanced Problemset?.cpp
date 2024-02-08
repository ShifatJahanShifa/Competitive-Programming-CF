#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n,x;cin>>x>>n;
        int ans=1;
        for (int i = 1; i*i <=x; i++)
        {
            if((x%i)==0) 
            {
                int div=x/i;
                if(div>=n) ans=max(ans,i);
                int j=x/i;
                div=x/j;
                if(div>=n) ans=max(ans,j);
            }
        }
        cout<<ans<<"\n";
    }
}
