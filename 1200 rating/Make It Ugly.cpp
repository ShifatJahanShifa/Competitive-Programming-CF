#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for (int i = 0; i <n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        int maxi=0,element;
        for(auto it:mp)
        {
            if(maxi<it.second)
            {
                maxi=max(maxi,it.second);
                element=it.first;
            }
        }
        int l=0,r=INT_MAX;
        for (int i = 0; i <n; i++)
        {
            if(v[i]!=element) 
            {
                if(l==0)
                r=min(r,i);
                else r=min(r,(i-l-1));
                l=i;
            }
        }
        if(l!=0)
        r=min(r,(n-l-1));
        if(r==INT_MAX)
        cout<<"-1\n";
        else cout<<r<<"\n";
    }
} 
