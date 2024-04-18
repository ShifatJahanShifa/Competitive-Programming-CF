#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,k;cin>>n>>k;
        int l=n/2;
        for (int i =0; i <l; i++)
        {
            cout<<n-i<<" "<<i+1<<" ";
        }
        if(n&1) cout<<((n+1)>>1);
        cout<<"\n";
    }
} 
