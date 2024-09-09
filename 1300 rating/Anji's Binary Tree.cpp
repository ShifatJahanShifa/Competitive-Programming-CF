#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int>v(300005);
vector<pair<int,int>>vp(300005);
int solve(int u)
{
    auto it=vp[u];
    int l=it.first,r=it.second;
    if(l==0 and r==0) return 0;
    int ans=INT_MAX;
    // left part
    if(l)
    {
        int t=0;
        if(v[u]!=1) 
        {
            t++;
        }
        t+=solve(l);
        ans=min(ans,t);
    }
    // right part
    if(r)
    {
        int t=0;
        if(v[u]!=2) 
        {
            t++;
        }
        t+=solve(r);
        ans=min(ans,t);
    }
    return ans;
}

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,k;cin>>n;
        string s,b;cin>>s;
        v.assign(n+1,0);
        vp.assign(n+1,make_pair(0,0));
        for (int i = 0; i <n; i++)
        {
            if(s[i]=='U')
            v[i+1]=0;
            else if(s[i]=='L') 
            v[i+1]=1;
            else v[i+1]=2;
        }
        int l,r;
        for (int i = 0; i <n; i++)
        {
            cin>>l>>r;
            vp[i+1]=make_pair(l,r);
        }
        cout<<solve(1)<<"\n";
    }
}
