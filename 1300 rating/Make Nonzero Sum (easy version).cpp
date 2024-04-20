#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m;cin>>n;
        vector<int>a(n);
        vector<pair<int,int>>ans;
        for(auto &it:a) cin>>it;
        if(n&1) cout<<"-1\n";
        else 
        {
            for (int i = 1; i <n; i+=2)
            {
                if(a[i]==1 and a[i-1]==1) 
                {
                    ans.push_back(make_pair(i,i+1));
                }
                else if(a[i]==-1 and a[i-1]==-1)
                {
                    ans.push_back(make_pair(i,i+1));
                }
                else
                {
                    ans.push_back(make_pair(i,i));
                    ans.push_back(make_pair(i+1,i+1));
                }
            }
            cout<<ans.size()<<"\n";
            for (int i = 0; i <ans.size(); i++)
            {
                cout<<ans[i].first<<" "<<ans[i].second<<"\n";
            }
            
        }
    }
} 
