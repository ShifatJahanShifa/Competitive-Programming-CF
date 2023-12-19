#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,k;cin>>n;
        string s;cin>>s;
        map<char,int>mp;
        int maxi=0,temp;
        for (int i = 0; i <n; i++)
        {
            mp[s[i]]++;
            temp=mp[s[i]];
            maxi=max(maxi,temp);
        }
        if(n&1) 
        {
            if(maxi<=(n>>1)) cout<<1<<"\n";
            else cout<<maxi-(n-maxi)<<"\n";
        }
        else 
        {
            if(maxi>(n>>1)) cout<<maxi-(n-maxi)<<"\n";
            else cout<<0<<"\n";
        }
    }
}
