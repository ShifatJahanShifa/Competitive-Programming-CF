#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        long long ans = 0, a;
        int cnt = 3; 
        bool ok;
        while (cnt--)
        {
            ok=true;
            for (int i = 0; i < n; i++)
            {
                cin >> a;
                if((a&x)==a and ok) 
                {
                    ans|=a;
                }
                else ok=false;
            }
        }
        if(ans==x) puts("Yes");
        else puts("No");
    }
}
