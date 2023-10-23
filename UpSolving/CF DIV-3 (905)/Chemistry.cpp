#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T; cin>> T;
    while ( T--)
    {
        int n,k; cin>>n>>k;
        int odd=0;
        map<int,int>mp;
        int e; string s;cin>>s;
        for(int i=0;i<n;i++)
        {
            e=s[i]-'a'; 
            mp[e]++;
        }
        for(auto it:mp)
        {
            if(it.second&1) odd++;
        }
        if(odd>(k+1)) puts("No");
        else puts("Yes");
    }
}
