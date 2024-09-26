#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;

// ll BE(ll a,ll b)
// {
//     ll ans=1LL;
//     while(b)
//     {
//         if(b%2LL) ans*=a;
//         ans%=mod;
//         a*=a;
//         a%=mod;
//         b/=2LL;
//     }
//     return ans;
// }  



int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;
        string s;cin>>n>>s;
        if(n&1)
        {
            vector<map<char,int>>pre(2),suf(2);
            // cout<<"dhs\n";
            for (int i = n-1; i>-1; i--)
            {
                suf[i&1][s[i]]++;
            }
            // cout<<"dhs\n";
            int ans=n+5;
            for (int i = 0; i <n; i++)
            {
                suf[i&1][s[i]]--;
                int res=n,temp=0;
                for (int j = 0; j<2; j++)
                {
                    temp=0;
                    for (int k = 0; k<26; k++)
                    {
                        temp=max(temp,pre[1-j]['a'+k]+suf[j]['a'+k]);
                    }
                    res-=temp;
                }
                ans=min(ans,res);
                pre[i&1][s[i]]++;
            }
            cout<<ans<<"\n";
        }
        else 
        {
            map<char,int>mp1,mp2;
            for (int i = 0; i <n; i++)
            {
                if(i&1) mp2[s[i]]++;
                else mp1[s[i]]++;
            }
            int ans=n;
            int mx=0;
            for(auto it:mp1) 
            {
                mx=max(mx,it.second);
            }
            ans-=mx;
            mx=0;
            for(auto it:mp2) 
            {
                mx=max(mx,it.second);
            }
            ans-=mx;
            cout<<ans<<"\n";
        }
    }
    
}

// 0011001
