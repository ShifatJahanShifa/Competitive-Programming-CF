problem link: https://codeforces.com/contest/1759/problem/D

                                                      solution
 ----------------------------------------------------------------------------------------------------------------------------------------
 
 #include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n,m;cin>>n>>m;
        long long k=1,ans=n;
        while (n%10==0)
        {
            n/=10;
        }
        while (n%2==0)
        {
            if(k*5<=m){
            k*=5;
            n/=2;
            }
            else break;
        }
        while (n%5==0)
        {
            if(k*2<=m){
            n/=5;
            k*=2;
            } 
            else break;
        }
        while (k*10<=m)
        {
            k*=10;
        }
        k=(m/k)*k;
        cout<<k*ans<<"\n";
    }
}
