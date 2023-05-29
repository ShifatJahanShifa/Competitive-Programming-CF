link: https://codeforces.com/contest/1831/problem/A

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
        int arr[n]; 
        for(auto &it:arr) cin>>it;
        int sum=1+n; 
        for (int i = 0; i <n; i++)
        {
            cout<<sum-arr[i]<<" ";
        }
        puts("");
    }
}
