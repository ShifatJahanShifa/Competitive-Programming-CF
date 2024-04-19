#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m;cin>>n;
        vector<int>a(n),ans;
        for(auto &it:a) cin>>it;
        if(a[n-1]==1) cout<<"NO\n";
        else if(n==1 and a[0]==0) cout<<"YES\n0\n";
        else 
        {
            cout<<"YES\n";
            int oneWhen=0;
            for (int i = n-1; i>-1; i--)
            {
                if(a[i]==0) 
                {
                    if(oneWhen) 
                    {
                        for (int i = 1; i <oneWhen; i++)
                        {
                            ans.push_back(0);
                        }
                        ans.push_back(oneWhen);
                        oneWhen=0;
                    }
                    ans.push_back(0);
                }
                else 
                {
                    oneWhen++;
                }
            }
            if(oneWhen) 
            {
                for (int i = 1; i <oneWhen; i++)
                {
                    ans.push_back(0);
                }
                ans.push_back(oneWhen);
            }
            for (int i = 0; i <n; i++)
            {
                cout<<ans[i]<<" \n"[i==n-1];
            }
        }
    }
} 
