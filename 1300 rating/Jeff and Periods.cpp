#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() // bs
{
    int n;cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    map<int,vector<int>>mp;
    for (int i = 0; i <n; i++)
    {
        mp[v[i]].push_back(i);
    }
    int cnt=0;
    vector<pair<int,int>>vp;
    for(auto it:mp)
    {
        auto v=it.second;
        sort(v.begin(),v.end());
        int d=0,temp;
        bool ok=true;
        for (int i = 1; i < v.size(); i++)
        {
            temp=v[i]-v[i-1];
            if(d==0) 
            {
                d=temp;
            }
            else if(d!=temp) 
            {
                ok=false;
                break;
            }
        }
        if(ok) 
        {
            cnt++;
            vp.push_back(make_pair(it.first,d));
        }
    }
    cout<<cnt<<"\n";
    for (int i = 0; i <cnt; i++)
    {
        cout<<vp[i].first<<" "<<vp[i].second<<"\n";
    }
    
}
