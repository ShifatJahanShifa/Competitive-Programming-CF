#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        string s[n];
        char ans[n][m];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        
        // validity check
        bool ok = false;
        //row
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            for (int j = 0; j < m; j++)
            {
                if (s[i][j] != '.')
                    temp++;
            }
            if (temp & 1)
            {
                ok = true;
                break;
            }
        }
        //column
        for (int i = 0; i < m; i++)
        {
            int temp = 0;
            for (int j = 0; j < n; j++)
            {
                if (s[j][i] != '.')
                    temp++;
            }
            if (temp & 1)
            {
                ok = true;
                break;
            }
        }
        if (ok)
            puts("-1");
        else
        {
            // column filling
            for (int i = 0; i < n; i++)
            {
                bool turnW = true, turnB = false;
                for (int j = 0; j < m; j++)
                {
                    if (s[i][j] == 'U')
                    {
                        if (turnW)
                        {
                            ans[i][j] = 'W';
                            ans[i + 1][j] = 'B';
                            turnW = false;
                            turnB = true;
                        }
                        else if (turnB)
                        {
                            ans[i][j] = 'B';
                            ans[i + 1][j] = 'W';
                            turnW = true;
                            turnB = false;
                        }
                    }
                    else if (s[i][j] == '.')
                    {
                        ans[i][j] = '.';
                    }
                }
            }
            // row filling
            for (int i = 0; i < m; i++)
            {
                bool turnW = true, turnB = false;
                for (int j = 0; j < n; j++)
                {
                    if (s[j][i] == 'L')
                    {
                        if (turnW)
                        {
                            ans[j][i] = 'W';
                            ans[j][i + 1] = 'B';
                            turnW = false;
                            turnB = true;
                        }
                        else if (turnB)
                        {
                            ans[j][i] = 'B';
                            ans[j][i + 1] = 'W';
                            turnW = true;
                            turnB = false;
                        }
                    }
                    else if (s[j][i] == '.')
                    {
                        ans[j][i] = '.';
                    }
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << ans[i][j];
                }
                puts("");
            }
        }
    }
}
