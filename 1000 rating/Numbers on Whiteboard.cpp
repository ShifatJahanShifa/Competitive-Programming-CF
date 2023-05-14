problem link: https://codeforces.com/problemset/problem/1430/C

my solution: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n,m,ans=0;cin>>n;
        int a=0,b=0;
        vector<int>v;
        vector<pair<int,int>>vp;
        for (int i = 1; i <=n; i++)
        {
            v.push_back(i);
        }    
        for (int i = n-1; i>0; i--)
        {
            a=v[i],b=v[i-1];
            ans=(a+b)/2;
            if((a&1)^(b&1)) ans++;
            v.pop_back();
            v.pop_back();
            v.push_back(ans);
            vp.push_back(make_pair(a,b));
        }
        cout<<v[0]<<"\n";
        for (int i = 0; i <n-1; i++)
        {
            cout<<vp[i].first<<" "<<vp[i].second<<"\n";
        }
    }
}
