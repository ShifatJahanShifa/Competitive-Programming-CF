#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,k;cin>>n>>k;
        vector<ll>v(k),a(n);
        for(auto &it:v) cin>>it;
        ll prev=v[0];
        int div=n-k+1;
        if(v[0]<1) 
        {
            prev=v[0]/div;
        }
        else 
        {
            if(v[0]%div) 
            {
                prev=(v[0]/div)+1;
            }
            else 
            {
                prev=v[0]/div;
            }
        }
        //cout<<prev<<"\n";
        a[n-k]=prev;
        for (int i = 1; i <k; i++)
        {
            a[n+i-k]=v[i]-v[i-1];
        }
        bool ok=true;
        for (int i = n-k; i <n-1; i++)
        {
            if(a[i]>a[i+1]) 
            {
                ok=false;
                break;
            }
        }
        ok ? cout<<"YES\n" : cout<<"NO\n";
    }
} 
