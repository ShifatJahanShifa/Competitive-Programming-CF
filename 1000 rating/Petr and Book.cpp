problem link: https://codeforces.com/contest/139/problem/A

my solution: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0,sum=0;
    cin>>n;
    int arr[7];
    for(auto &it:arr) cin>>it;

    bool ok=false;
    while (1)
    {
        for (int i = 0; i <7; i++)
        {
            sum+=arr[i];
            if(sum>=n)
            {
                ok=true;
                ans=i+1;
                break;
            }
        }
        if(ok) break;
    }
    cout<<ans;
}
