link: https://codeforces.com/contest/264/problem/B

my solution: 
#include <iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int dp[100005]={0},d[100005]={0};
    int e,ans=0;
    for (int i = 0; i <n; i++)
    {
        cin>>e; 
        dp[e]=1,d[e]=1;
        for (int j = 2;j*j <=e; j++)
        {
            if(e%j==0) 
            {
                dp[e]=max(dp[e],d[j]+1);
                dp[e]=max(dp[e],d[e/j]+1);
            }
        }
        for (int j = 2;j*j <=e; j++)
        {
            if(e%j==0) 
            {
                d[j]=dp[e];
                d[e/j]=dp[e];
            }
        }
        ans=max(ans,dp[e]);
    }
    cout<<ans<<"\n";
}

