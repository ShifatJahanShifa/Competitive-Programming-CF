#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
    int n,m;cin>>n>>m;
    vector<int>f,b,v(m);
    for(auto &it:v) cin>>it;
    priority_queue<int>pq;
    for (int i = 0; i < m; i++)
    {
        pq.push(v[i]);
    }
    int maxi=0,mini=0;
    for (int i = 0; i <n; i++)
    {
        int temp=pq.top();
        maxi+=temp;
        pq.pop();
        temp--;
        pq.push(temp);
    }
    sort(v.begin(),v.end());
    int temp=v[0];
    int ptr=1;
    for (int i = 0; i <n; i++)
    {
        mini+=temp;
        temp--;
        if(temp==0) 
        {
            temp=v[ptr];
            ptr++;
        }
    }
    cout<<maxi<<" "<<mini<<"\n";
}
