#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 1)
            puts("1");
        else
        {
            int cnt = 1;
            map<char, int> mp;
            mp[s[0]]++;
            //mp[s[1]]++;
            int tr = 1;
            for (int i = 1; i < n; i++)
            {
                if (mp[s[i]] != 0)
                {
                    //tr -= mp[s[i]];
                    cnt += tr;
                }
                else
                {
                    cnt += (tr + 1);
                    tr++;
                    mp[s[i]]++;
                }
            }
            cout << cnt << "\n";
        }
    }
}
