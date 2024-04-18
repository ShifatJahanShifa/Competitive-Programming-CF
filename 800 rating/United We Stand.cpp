#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<int>v(n),b,c;
        for(auto &it:v) cin>>it;
        int check,pos=-1;
        sort(v.begin(),v.end());
        int maxi=v[n-1];
        for (int i = 0; i <n; i++)
        {
            if(v[i]==maxi) c.push_back(v[i]);
            else b.push_back(v[i]);
        }
        if(b.size()==0 or c.size()==0) cout<<"-1\n";
        else 
        {
            cout<<b.size()<<" "<<c.size()<<"\n";
            for (int i = 0; i <b.size(); i++)
            {
                cout<<b[i]<<" ";
            }
            puts("");
            for (int i = 0; i <c.size(); i++)
            {
                cout<<c[i]<<" ";
            }
            puts("");
        }
    }
} 
