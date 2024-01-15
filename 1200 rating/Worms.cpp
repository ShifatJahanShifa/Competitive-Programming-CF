#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, q;
    cin >> n;
    vector<int> v(n), prefix(n + 1, 0);
    for (auto &it : v)
        cin >> it;
    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] = prefix[i] + v[i];
    }
    int val;
    cin >> q;
    while (q--)
    {
        cin >> val;
        int pos = lower_bound(prefix.begin(), prefix.end(), val) - prefix.begin();
        cout << pos << "\n";
    }
}
