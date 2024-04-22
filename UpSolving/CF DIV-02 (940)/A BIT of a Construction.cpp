#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,k;cin>>n>>k;
        if(n==1) cout<<k<<"\n";
        else 
        {
            vector<int>ans;
            if(k&(k-1)==0) 
            {
                ans.push_back(k-1);
                ans.push_back(1);
                n-=2;
                for (int i = 0; i <n; i++)
                {
                    ans.push_back(0);
                }
            }
            else 
            {
                int v;
                for (int i = 0; ; i++)
                {
                    v=(1<<i);
                    if(v>k) 
                    {
                        v=(1<<(i-1))-1;
                        break;
                    }
                }
                ans.push_back(v);
                k-=v;
                ans.push_back(k);
                n-=2;
                for (int i = 0; i <n; i++)
                {
                    ans.push_back(0);
                }
            }
            for (int i = 0; i <ans.size(); i++)
            {
                cout<<ans[i]<<" ";
            }
            puts("");
        }
    }
} 
