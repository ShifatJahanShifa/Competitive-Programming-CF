link: https://codeforces.com/contest/1831/problem/B

my solution: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;cin>>n; 
        int arr1[n],arr2[n]; 
        set<int>st1,st2;
        for (int i = 0; i <n; i++)
        {
            cin>>arr1[i];
            st1.insert(arr1[i]);
        }
        for (int i = 0; i <n; i++)
        {
            cin>>arr2[i];
            st2.insert(arr2[i]);
        }
        map<int,vector<int>>mp1,mp2;
        int check=arr1[0],cnt=1;
        for (int i = 1; i <n; i++)
        {
            if(arr1[i]!=check) 
            {
                mp1[check].push_back(cnt);
                cnt=1;
                check=arr1[i];
            }
            else 
            {
                cnt++;
            }
        }
        mp1[check].push_back(cnt);
        check=arr2[0],cnt=1;
        for (int i = 1; i <n; i++)
        {
            if(arr2[i]!=check) 
            {
                mp2[check].push_back(cnt);
                cnt=1;
                check=arr2[i];
            }
            else 
            {
                cnt++;
            }
        }
        mp2[check].push_back(cnt);
        int ans=0; 
        for(auto it:mp1) 
        {
            int temp=it.first;
            if(st2.count(temp)) 
            {
                auto v=it.second;
                sort(v.begin(),v.end()); 
                auto v1=mp2[temp];
                sort(v1.begin(),v1.end());
                int p1=v[v.size()-1],p2=v1[v1.size()-1];
                ans=max(ans,p1+p2);
            } 
            else 
            {
                auto v=it.second;
                sort(v.begin(),v.end()); 
                ans=max(ans,v[v.size()-1]);
            }
        }
        for(auto it:mp2) 
        {
            int temp=it.first;
            if(!st1.count(temp)) 
            {
                auto v=it.second;
                sort(v.begin(),v.end()); 
                ans=max(ans,v[v.size()-1]);
            }
        }
        cout<<ans<<"\n";
    }
}
