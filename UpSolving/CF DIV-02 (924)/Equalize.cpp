#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &it : v)
            cin >> it;
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        int maxi = 0, l = 0;
        for (int i = 0; i < v.size(); i++)
        {
            while ((v[i]-v[l])>=n)
            {
                l++;
            }
            
            maxi = max(maxi,i-l+1);
        }
        cout << maxi << "\n";
    }
}
