#include <bits/stdc++.h>
using namespace std;

const int N=2e5+5;
vector<int>tree[N];
int countLeaves[N];
bool isVisited[N];

void calculateLeaves(int u)
{
    bool ok=true;
    isVisited[u]=true;
    for(auto v:tree[u])
    {
        if(isVisited[v]==false)
        {
            ok=false;
            calculateLeaves(v);
            countLeaves[u]+=countLeaves[v];
        }
    }
    if(ok)
    {
        countLeaves[u]=1;
    }
}

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n,u,v;
        cin>>n;
        for (int i = 0; i <=n; i++)
        {
            tree[i].clear();
            countLeaves[i]=0;
            isVisited[i]= false;
        }

        for (int i = 1; i <n; i++)
        {
            cin>>u>>v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }
        calculateLeaves(1);
        int q,x,y;
        cin>>q;
        while (q--)
        {
            cin>>x>>y;
            long long ans=0;
            ans=countLeaves[x]*1LL*countLeaves[y];
            cout<<ans<<"\n";
        }
    }
}
