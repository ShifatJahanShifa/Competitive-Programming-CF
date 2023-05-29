link: https://codeforces.com/contest/1831/problem/C

my solution: 

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> vp[1000005]; 
map<pair<int, int>, int> records;
vector<int>iter;

void DFS(int curr,int par)
{
    for(auto it:vp[curr]) 
    {
        int v=it.first;
        int id=it.second; 
        if(v==par) continue;

        records[{curr,v}]=id;
        records[{v,curr}]=id; 

        if(iter[v]==INT_MAX) 
        {
            if(curr==1) 
            {
                iter[v]=1;
            }
            else 
            {
                if(id>records[{curr,par}]) 
                {
                    iter[v]=iter[curr];
                }
                else 
                {
                    iter[v]=iter[curr]+1;
                }
            }
        }
        DFS(v,curr);
    }
} 

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, a, b;
        cin >> n;
        for (int i = 0; i <=n; i++)
        {
            vp[i].clear();
        }
        records.clear();
        iter.assign(n + 1, INT_MAX);
        iter[0] = 0;
        iter[1]=0;
        for (int i = 1; i < n; i++)
        {
            cin >> a >> b;
            vp[a].push_back(make_pair(b, i));
            vp[b].push_back(make_pair(a, i));
        }

        DFS(1,-1);  // curr, parent
        
        int ans = 0;
        sort(iter.begin(),iter.end());
        ans=iter[n];
        cout << ans << "\n";
    }
}
