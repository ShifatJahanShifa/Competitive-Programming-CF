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
        vector<int> v(n);
        for (auto &it : v)
            cin >> it;
        bool ok = true;
        int prev=0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < prev)
            {
                ok = false;
                break;
            }
            else 
            {
                int a=v[i]%10;
                int b=v[i]/10;
                if(b>a) 
                {
                    prev=v[i];
                } 
                else if(prev<=b)
                {
                    prev=a;
                }
                else 
                {
                    prev=v[i];
                }
            }
        }
        ok ? cout << "YES\n" : cout << "NO\n";
        
    }
}
