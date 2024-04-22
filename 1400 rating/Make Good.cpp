#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<ll>v(n);
        for(auto &it:v) cin>>it;
        ll sum=0,x=0;
        for (int i = 0; i <n; i++)
        {
            sum+=v[i];
            x^=v[i];
        }
        ll add=x+sum;
        cout<<2<<"\n";
        cout<<add<<" "<<x<<"\n";
    }
} 
