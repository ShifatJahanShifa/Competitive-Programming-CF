#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n,a;
        cin>>n;
        bool ok=false;
        for (int i = 1; i <=n; i++)
        {
            cin>>a;
            if(a<=i) 
            {
                ok=true;
            }
        }
        if(ok) puts("YES");
        else puts("NO");
    }
}
