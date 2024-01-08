#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
    int n,k;cin>>n>>k;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    ll sum=0;
    for (int i = 0; i <k; i++)
    {
        sum+=v[i];
    }
    int idx=1;
    ll temp=sum;
    for (int i = 1; i <= n-k; i++)
    {
        int t=i+k-1;
        sum-=v[i-1];
        sum+=v[t];
        if(sum<temp) 
        {
            idx=i+1;
            temp=sum;
        }
    }
    cout<<idx<<"\n";
}
