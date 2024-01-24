#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int l = 1e5 + 10;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    map<int, set<int>> c;
    set<int>st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        // c[v[i]].resize(0);
        st.insert(v[i]);
    }

    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        int temp1 = v[a - 1], temp2 = v[b - 1];
        if (temp1 != temp2)
        {
            c[temp1].insert(temp2);
            c[temp2].insert(temp1);
        }
    }
    int maxi = 0, mini = INT_MAX, temp;

    for (auto &it : st)
    {
        int s = c[it].size();
        //cout<<s<<"\n";
        if (s > maxi)
        {
            maxi = s;
            mini = it;
        }
        else if (s == maxi)
        {
            if (mini > it)
                mini = it;
        }
        // cout << mini << " m\n";
    }
    cout << mini << "\n";
}

