#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    vector<vector<string>>vs(5,vector<string>());
    string s;
    for (int i = 0; i <n; i++)
    {
        cin>>s;
        if(s.size()==1) vs[0].push_back(s);
        else if(s.size()==2) vs[1].push_back(s);
        else if(s.size()==3) vs[2].push_back(s);
        else if(s.size()==4) vs[3].push_back(s);
        else vs[4].push_back(s);
    }
    ll ans=n;
    map<int,map<int,int>>mpp;
    for (int i = 0; i <5; i++)
    {
        auto it=vs[i];
        for (int j = 0; j <it.size(); j++)
        {
            string str=it[j];
            int val=0;
            for (int k = 0;k<=i; k++)
            {
                val+=(str[k]-'0');
            }
            mpp[i+1][val]++;
        }
    }
    for(auto it:mpp) 
    {
        for(auto it1:it.second)
        {
            if(it1.second>1) 
            {
                ll p=it1.second;
                p=p*(p-1LL);
                ans+=p;
            }
            // cout<<it.first<<" "<<it1.first<<" "<<it1.second<<"\n";
        }
    }
    // 3
    for(auto str:vs[2]) 
    {
        int val=0;
        for (int k = 0;k<3; k++)
        {
            val+=(str[k]-'0');
        }
        int temp=val;
        // forward
        temp-=(str[0]-'0');
        temp-=(str[0]-'0');
        ll p=mpp[1][temp];
        ans+=p;

        // backward
        temp=val;
        temp-=(str[2]-'0');
        temp-=(str[2]-'0');
        p=mpp[1][temp];
        ans+=p;
    }
    // 5
    for(auto str:vs[4]) 
    {
        int val=0;
        for (int k = 0;k<5; k++)
        {
            val+=(str[k]-'0');
        }
        int temp=val;
        // forward
        temp-=(2*(str[0]-'0'));
        temp-=(2*(str[1]-'0'));
        ll p=mpp[1][temp];
        ans+=p;
        // backward
        temp=val;
        temp-=(2*(str[4]-'0'));
        temp-=(2*(str[3]-'0'));
        p=mpp[1][temp];
        ans+=p;
    }
    for(auto str:vs[4]) 
    {
        int val=0;
        for (int k = 0;k<5; k++)
        {
            val+=(str[k]-'0');
        }
        int temp=val;
        // forward
        temp-=(str[0]-'0');
        temp-=(str[0]-'0');
        ll p=mpp[3][temp];
        ans+=p;

        // backward
        temp=val;
        temp-=(str[4]-'0');
        temp-=(str[4]-'0');
        p=mpp[3][temp];
        ans+=p;
    }
    for(auto str:vs[3]) 
    {
        int val=0;
        for (int k = 0;k<4; k++)
        {
            val+=(str[k]-'0');
        }
        int temp=val;
        // forward
        temp-=(str[0]-'0');
        temp-=(str[0]-'0');
        ll p=mpp[2][temp];
        ans+=p;

        // backward
        temp=val;
        temp-=(str[3]-'0');
        temp-=(str[3]-'0');
        p=mpp[2][temp];
        ans+=p;
    }
    cout<<ans<<"\n";
}
