problem link: https://codeforces.com/problemset/problem/1368/A

# my solution

#include <bits/stdc++.h>
using namespace std;

int minimumOperation(long long a,long long b,long long n)
{
    long long sum=a+b;
    long long num1,num2;
    a<b? num1=b: num1=a;
    int cnt=1;
    
    while(sum<=n)
    {
        cnt++;
        num2=sum;
        sum=num1+sum;
        num1=num2;
    }
    return cnt;
}

int main()
{
    int T;cin>>T;
    while (T--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        cout<<minimumOperation(a,b,n)<<"\n";
    }
}
