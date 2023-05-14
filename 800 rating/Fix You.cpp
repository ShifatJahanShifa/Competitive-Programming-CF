problem link: https://codeforces.com/problemset/problem/1391/B

my solution: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n,m,ans=0;cin>>n>>m;
        getchar();
        char twoD[n][m];
        for (int i = 0; i <n; i++)
        {
            for (int j = 0; j <m; j++)
            {
                cin>>twoD[i][j];
            }
            getchar();
        }
        for (int i =0; i <m-1; i++)
        {
            if(twoD[n-1][i]!='R') ans++;
        }
        for (int i =0; i <n-1; i++)
        {
            if(twoD[i][m-1]!='D') ans++;
        }
        cout<<ans<<"\n";
    }
}
