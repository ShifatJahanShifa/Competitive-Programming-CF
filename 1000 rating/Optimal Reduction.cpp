#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<ll>v(n),work(n);
        for(auto &it:v) cin>>it;
        ll sum=0,c;
        ll mini=*min_element(v.begin(),v.end());
        for (int i = 0; i <n; i++)
        {
            work[i]=v[i]-mini;
        }
        sum=mini,c=mini;
        ll maxi=*max_element(v.begin(),v.end());
        for (int i = 0; i <n; i++)
        {
            if(v[i]>c) 
            {
                sum+=(v[i]-c);
                c+=(v[i]-c);
            }
            else if(v[i]<c) 
            {
                c=v[i];
            }
        }
        if(sum!=maxi) cout<<"NO\n";
        else cout<<"YES\n";
    }
} 
