#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T,k=1;cin>>T;
    while (T--)
    {
        int n,k;cin>>n>>k;
        vector<int>v(n);
        for(auto &it:v) cin>>it;
        int cnt=0;
        bool ok=false;
        for (int i = 30; i>-1; i--)
        {
            cnt=0;
            for (int j = 0; j<n; j++)
            {
                if(!(v[j]&(1<<i))) 
                {
                    cnt++;
                }
            }
            //cout<<cnt<<"hbh\n";
            if(cnt<=k) 
            {
                k-=cnt;
                for (int j = 0; j <n; j++)
                {
                    v[j]|=(1<<i);
                    //cout<<v[j]<<"\n";
                }
                    
            }
            
        }
        int ans=v[0];
        for (int i = 1; i <n; i++)
        {
            ans&=v[i];
        }
        cout<<ans<<"\n";
    }
} 
