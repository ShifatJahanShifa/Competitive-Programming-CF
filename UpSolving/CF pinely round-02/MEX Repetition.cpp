#include <bits/stdc++.h>
using namespace std;
const int h = 1e5 + 10;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        bool hashmap[h] = {false};
        vector<int> v(n), ans;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            hashmap[v[i]] = true;
        }
        int mini = -1;
        for (int i = 0; i <= n; i++)
        {
            if (hashmap[i] == false)
            {
                mini = i;
                break;
            }
        }
        int cnt = k % (n + 1);
        cnt--;
        if (cnt > 0)
        {
            for (int i = n - cnt; i < n; i++)
            {
                ans.push_back(v[i]);
            }
            ans.push_back(mini);
            for (int i = 0; i < n - cnt; i++)
            {
                ans.push_back(v[i]);
            }
        }
        else if (cnt == 0)
        {
            ans.push_back(mini);
            for (int i = 0; i < n - 1; i++)
            {
                ans.push_back(v[i]);
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout <<v[i] << " ";
            }
            puts("");
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        puts("");
    }
}
