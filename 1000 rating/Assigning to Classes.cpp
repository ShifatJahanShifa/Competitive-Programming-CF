problem link: https://codeforces.com/problemset/problem/1300/B

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
        vector<long>v(2*n);
        for(auto &it:v) cin>>it;
        sort(v.begin(),v.end());
        ans=abs(v[n]-v[n-1]);
        cout<<ans<<"\n";
    }
}
