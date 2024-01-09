#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int d = 110;
int m, n;
string s[d];

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '.')
            {
                if((i+j)&1) s[i][j]='B';
                else s[i][j]='W';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << s[i][j];
        }
        puts("");
    }
}
