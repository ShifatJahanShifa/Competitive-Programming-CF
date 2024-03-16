#include<bits/stdc++.h>
using namespace std;

vector<int>dx{-1,0,1,0},dy{0,1,0,-1};
int n;
bool isValid(int x,int y)
{
    return (x>-1 and x<2) and (y>-1 and y<n);
}

int main()
{
    int T;cin>>T;
    while (T--)
    {
        cin>>n;
        string a,b;cin>>a>>b;
        vector<string>v={a,b};
        
        //bfs 
        queue<pair<int,int>>qp;
        int isVisited[2][n+1];
        for (int i = 0; i <2; i++)
        {
            for (int j = 0; j<=n; j++)
            {
                isVisited[i][j]=0;
            }
        }
        qp.push(make_pair(0,0));
        isVisited[0][0]=1;
        while (!qp.empty())
        {
            auto it=qp.front();
            qp.pop();
            for (int i = 0; i <4; i++)
            {
                int xx=dx[i]+it.first;
                int yy=dy[i]+it.second;
                if(isValid(xx,yy)) 
                {
                    char c=v[xx][yy];
                    if(c=='>') yy++;
                    else yy--;
                    if(!isVisited[xx][yy]) {
                        qp.push(make_pair(xx,yy));
                        isVisited[xx][yy]=1;
                    }
                }
            }
        }
        isVisited[1][n-1] ? cout<<"YES\n":cout<<"NO\n";
    }
    
}
