#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>>graph(200009);

int dfs(int u,int parent,int x,int &cnt)
{
    int node=1;
    for(auto v:graph[u]) 
    {
        if(v==parent) continue;
        node+=dfs(v,u,x,cnt);
    }
    if(node>=x) 
    {
        cnt++;
        return 0;
    }
    else return node;
}

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,k;cin>>n>>k;
        int u,v;
        
        
        for (int i = 0; i <n-1; i++)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);        
        }
        int low=1,high=n,ans=0;
        // BS on answer;mgoodfunction checking will be done in the dfs 
        while (low<=high)
        {
            int mid=low+(high-low)/2;
            int cnt=0;
            dfs(1,-1,mid,cnt);
            if(cnt>k) 
            {
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        cout<<ans<<"\n";
        for (int i = 0; i <200009; i++)
        {
            graph[i].clear();
        }
    }
}
