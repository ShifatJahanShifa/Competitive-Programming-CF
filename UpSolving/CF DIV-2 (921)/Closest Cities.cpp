#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n),f(n),b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        //forward
        f[0]=0,f[1]=1;
        for (int i = 2; i < n; i++)
        {
            int left=v[i-2],right=v[i];
            left=abs(v[i-1]-left);
            right=abs(v[i-1]-right);
            if(right<left) f[i]=1;
            else f[i]=right; 
            //cout<<f[i]<<"\n";
        }
        //backward
        b[n-1]=0,b[n-2]=1;
        for (int i = n-3; i >-1; i--)
        {
            int left=v[i+2],right=v[i];
            left=abs(v[i+1]-left);
            right=abs(v[i+1]-right);
            if(right<left) b[i]=1;
            else b[i]=right;
        }
        for (int i = 1; i <n; i++)
        {
            f[i]=f[i-1]+f[i];
        }
        for (int i = n-2; i>-1; i--)
        {
            b[i]=b[i+1]+b[i];
        }
        // for (int i = 0; i <n; i++)
        // {
        //     cout<<f[i]<<" "<<b[i]<<"\n";
        // }
        
        int q,x,y;cin>>q;
        while (q--)
        {
            cin>>x>>y;
            if(y>x) cout<<f[y-1]-f[x-1]<<"\n";
            else cout<<b[y-1]-b[x-1]<<"\n";
        }
        
    }
}
