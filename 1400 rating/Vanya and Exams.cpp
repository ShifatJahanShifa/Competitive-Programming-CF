problem link: https://codeforces.com/contest/492/problem/C

my solution: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,r,avg;
    cin >> n >> r>>avg; 
    map<int,multiset<int>>mp;
    int a,b; 
    long long int sum=0,requiredSum;
    for (int i = 0; i <n; i++)
    {
        cin>>a>>b;
        sum+=a;
        mp[b].insert(a);
    }
    requiredSum=n*avg;
    if(sum>=requiredSum) puts("0");
    else 
    {
        long long requiredEassay=0;
        long long lack=requiredSum-sum;
        for (auto it:mp)
        {
            auto s=it.second;
            for (auto it1=s.begin(); it1!=s.end(); it1++)
            {
                if(!lack) break;
                long long temp=r-*it1;
                long long add=min(lack,temp);
                lack-=add;
                requiredEassay+=(add*it.first);
            }
            if(!lack) break;
        }
        cout<<requiredEassay<<"\n";
    }
}
