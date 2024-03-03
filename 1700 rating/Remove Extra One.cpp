#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1), ans(n + 1, 0);
    for (int i = 1; i <=n; i++)
    {
        cin>>v[i];
    }
    
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        st.insert(v[i]);
        auto it = st.upper_bound(v[i]);
        if (it == st.end())
        {
            ans[v[i]]--;
            continue;
        }
        if (it == (--st.end()))
        {
            ans[*it]++;
        }
    }
    int maxi = -2;
    int idx = -1;
    for (int i = 1; i <= n; i++)
    {
        if (ans[i] > maxi)
        {
            maxi = ans[i];
            idx = i ;
        }
    }
    cout << idx << "\n";
}
