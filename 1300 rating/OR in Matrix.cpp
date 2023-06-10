link: https://codeforces.com/problemset/problem/486/B

my solution: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int b[m][n], a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
            a[i][j] = 1;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    a[i][k] = 0;
                }
                for (int k = 0; k < m; k++)
                {
                    a[k][j] = 0;
                }
            }
        }
    }
    bool check = false;
    int ok;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ok = 0;
            for (int k = 0; k < n; k++)
            {
                if (a[i][k])
                {
                    ok = 1;
                    break;
                }
            }
            if (ok == 0)
            {
                for (int k = 0; k < m; k++)
                {
                    if (a[k][j])
                    {
                        ok = 1;
                        break;
                    }
                }
            }
            if (ok ^ b[i][j])
            {
                check = true;
                break;
            }
        }
        if (check)
            break;
    }

    if (check)
        puts("NO");
    else
    {
        puts("YES");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            puts("");
        }
    }
}
