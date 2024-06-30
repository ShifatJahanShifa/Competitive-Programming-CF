#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n; ll l,r; cin>>n>>l>>r;
        vector<ll>v(n);
        for(auto &it:v) cin>>it;
        int ans=0,mark=-1;
        ll cursum=0;
        for (int i = 0; i <n; i++)
        {
            cursum+=v[i];
            if(mark==-1) mark=i;
            if(cursum>=l and cursum<=r) 
            {
                ans++;
                cursum=0;
                mark=-1;
            }
            else if(cursum>r) 
            {
                for (int j = mark; j <=i; j++)
                {
                    cursum-=v[j];
                    if(cursum>=l and cursum<=r) 
                    {
                        ans++;
                        cursum=0;
                        mark=-1;
                        break;
                    }
                    else if(cursum<l) 
                    {
                        mark=j+1;
                        break;
                    }
                }
            }
        }
        cout<<ans<<"\n";
    }
}
