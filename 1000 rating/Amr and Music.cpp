link: https://codeforces.com/problemset/problem/507/A

my solution: 

#include <bits/stdc++.h>
using namespace std;

struct Info{
    int value;
    int index;
};

int main() 
{
    int n,k;cin>>n>>k;
    struct Info info[n];
    int v;
    for (int i = 0; i <n; i++)
    {
        cin>>v;
        info[i].index=i+1;
        info[i].value=v;
    }
     
    Info temp;
    for(int a=1;a<n;a++)
    {
        for(int b=n-1;b>=a;b--)
        {
            if(info[b-1].value>info[b].value)
            {
                temp=info[b-1];
                info[b-1]=info[b];
                info[b]=temp;
            }
        }
    }
        
    vector<int>ans;
    long sum=0;
    for (int i = 0; i <n; i++)
    {
        sum+=info[i].value;
        if(sum<=k)
        {
            ans.push_back(info[i].index);
        }
        else break;
    }
    cout<<ans.size()<<"\n";
    for (int i = 0; i <ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}
