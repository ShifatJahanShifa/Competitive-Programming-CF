#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;cin>>n;
    vector<int>v(n),pre(n),suf(n);
    for(auto &it:v) cin>>it;
    pre[0]=1;
    suf[n-1]=1;
    for (int i = n-2; i>-1; i--)
    {
        if(suf[i+1]<=v[i+1]) suf[i]=max(1,suf[i+1]-1);
        else suf[i]=suf[i+1]+1;
    }
    for (int i = 1; i <n; i++)
    {
        if(pre[i-1]<=v[i-1]) pre[i]=max(1,pre[i-1]-1);
        else pre[i]=pre[i-1]+1;
    }
    for (int i = 0; i <n; i++)
    {
        cout<<max(pre[i],suf[i])<<" \n"[i==n-1];
    }
    
}
