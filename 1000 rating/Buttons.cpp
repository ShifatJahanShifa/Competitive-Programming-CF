link: https://codeforces.com/problemset/problem/268/B

my solution: 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    long long ans=0;
    if(n==1) 
    {
        cout<<1;
    }
    else{
    m=n;
    while (m>2)
    {
        ans+=((m*(m+1))/2);
        ans-=(m-1);
        m--;
    }
    ans+=3;
    cout<<ans;
    }
}
