#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
const ll mod=1000000007;

int main()
{
    int n;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    map<int,int>mp;
    if(n==1) cout<<"N\n";
    else 
    {
        for (int i = 0; i <n; i++)
        {
            mp[v[i]]++;
        }
        auto it= prev(mp.end());
        int last=it->first;
        last++;
        it=mp.begin();
        int start=it->first;
        int oddCount=0;
        for (int i = start; i <=last; i++)
        {
            if(mp[i]&1) 
            {
                oddCount++;
                int add=mp[i]/2;
                mp[i+1]+=add;
            }
            else 
            {
                int add=mp[i]/2;
                mp[i+1]+=add;
            }
        }
        last++;
        while (1)
        {
            if(mp[last]&1) 
            {
                oddCount++;
                int add=mp[last]/2;
                last++;
                mp[last]+=add;
            }
            else 
            {
                int add=mp[last]/2;
                last++;
                mp[last]+=add;
            }
            if(mp[last]==0) break;
        }
        // cout<<oddCount<<"\n";
        if(oddCount<3) cout<<"Y\n";
        else cout<<"N\n";

    }
}
