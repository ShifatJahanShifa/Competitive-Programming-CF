#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;

ll rook(ll n,vector<ll>&dp) 
{
    if(n<=1) return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n]=(rook(n-1,dp)%mod+((2LL*(((n-1)%mod)*(rook(n-2,dp))%mod))%mod))%mod;
    return dp[n];
}

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,k;cin>>n>>k;
        int r,c,cnt=0;
        for (int i = 0; i <k; i++)
        {
            cin>>r>>c;
            if(r==c) cnt++;
            else cnt+=2;
        }
        n-=cnt;
        vector<ll>dp(n+1,-1);
        cout<<rook(n,dp)<<"\n";
    }
} 
