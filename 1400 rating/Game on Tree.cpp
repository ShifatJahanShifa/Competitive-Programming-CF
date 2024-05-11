#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>>graph(200009);
int t;
int first=0,scnd=0;
bool ok;
vector<int>cnt;

void leaf(int u,int parent)
{
    for (int i = 0; i <graph[u].size(); i++)
    {
        int v=graph[u][i];
        if(v!=parent) 
        {
            leaf(v,u);
        }
        if(parent==-1) 
        {
            cnt.push_back(first);
            first=0;
        }
        
    }
    first++; 
}

int main()
{
    int n;cin>>n>>t;
    int u,v;
    for (int i = 0; i <n-1; i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);        
    }
    cin>>t;
    leaf(t,-1);
    int ans=INT_MAX;
    int Ron=0;
    for (int i = 0; i <cnt.size(); i++)
    {
        int temp=cnt[i];
        if(temp%2) 
        {
            Ron=1;
        } 
    }
    Ron==0 ? cout<<"Hermione\n" : cout<<"Ron\n";
}
