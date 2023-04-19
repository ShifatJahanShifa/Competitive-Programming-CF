problem link: https://codeforces.com/contest/1814/problem/B

#include <bits/stdc++.h>
using namespace std;

long getSmallestNumber(int a,int b)
{
    int ans=1e5;
    int mini=min(a,b);
    int maxi=max(a,b);

    for (int i = 1; i < 100000; i++)
    {
        ans=min(ans,((mini+i-1)/i)+((maxi+i-1)/i)+i-1);
    }
    return ans;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a,b,m=1;
        cin>>a>>b;
        cout<<getSmallestNumber(a,b)<<"\n";
    }
}
