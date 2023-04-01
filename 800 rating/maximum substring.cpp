problem link: https://codeforces.com/contest/1750/problem/B 

## solution: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n;
        string s;
        cin >> s;
        long long ans = 0;
        long long zeros = 0, ones = 0;
        for (int i = 0; i < n; i++)
        {
            s[i] == '0' ? zeros++ : ones++;
        }
        ans = max(ans, zeros * ones);
        zeros = 0, ones = 0;
        long long repZ=0,repO=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                repZ++;
                zeros=max(zeros,repZ);
                repO=0;
            }
            else
            {
               repO++;
               ones=max(ones,repO);
               repZ=0;
            }
        }
        zeros *= zeros;
        ones *= ones;
        ans = max(ans, zeros);
        ans = max(ans, ones);

        cout << ans << "\n";
    }
}
