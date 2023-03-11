#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<set<int>>g(n+1);
    int u,v;
    for(int i=0; i<n-1; i++)
    {
        cin>>u>>v;
        g[u].insert(v);
        g[v].insert(u);
    }
    vector<int>seq(n);
    for(auto &it:seq)
        cin>>it;

    if(seq[0]!=1)
        puts("No");
    else
    {
        int s,t=1;
        for(s=0; s<n; s++)
        {
            while(g[seq[s]].count(seq[t]))
            {
                t++;
            }
        }
        t==n ? puts("Yes") : puts("No");
    }
}
