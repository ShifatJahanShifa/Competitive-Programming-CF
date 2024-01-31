#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 2);
    v[0] = 0;
    bool init = true;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] < v[i - 1])
            init = false;
    }
    if (init)
    {
        cout << "yes\n1 1\n";
    }
    else
    {
        v[n + 1] = INT_MAX;
        int l = 0, r = 0;
        bool ok = true;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] > v[i + 1])
            {
                l = i;
                for (int j = l + 1; j <= n; j++)
                {
                    if (v[j] < v[j + 1])
                    {
                        r = j;
                        break;
                    }
                }
            }
            if (l and r)
                break;
        }
        if (v[l - 1] < v[r] and v[l] < v[r + 1])
        {
            for (int i = r + 1; i <= n; i++)
            {
                if (v[i] > v[i + 1])
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                cout << "yes\n"
                     << l << " " << r << "\n";
            }
            else cout<<"no\n";
        }
        else
            puts("no");
    }
}
