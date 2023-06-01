link: https://codeforces.com/problemset/problem/1373/A

my solution: 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        int res1,res2;
        if(a>=c) 
        {
            res1=-1;
        }
        else 
        {
            res1=1;
        }
        long long temp=a*b;
        if(temp>c) 
        {
            res2=b;
        }
        else res2=-1;
        cout<<res1<<" "<<res2<<"\n";
    }
}
