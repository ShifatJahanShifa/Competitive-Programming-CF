https://codeforces.com/problemset/problem/224/A

#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int main()
{
    vector<int>v(3);
    for(auto &it:v) cin>>it;
    int a=sqrt((v[0]*v[2])/v[1]);
    int b=sqrt((v[0]*v[1])/v[2]);
    int c=sqrt((v[1]*v[2])/v[0]);
    int ans=4*(a+b+c);
    cout<<ans;
}
