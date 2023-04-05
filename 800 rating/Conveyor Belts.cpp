problem link: https://codeforces.com/contest/1811/problem/B 

                                                      solution
 --------------------------------------------------------------------------------------------------------------------------------------------------------- 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n,x1,y1,x2,y2;
        cin>>n>>x1>>y1>>x2>>y2;
        x1=min(x1,n-x1+1);
        y1=min(y1,n-y1+1);
        x2=min(x2,n-x2+1);
        y2=min(y2,n-y2+1);
        int level1=min(x1,y1);
        int level2=min(x2,y2);
        cout<<abs(level1-level2)<<"\n";
    }
}
