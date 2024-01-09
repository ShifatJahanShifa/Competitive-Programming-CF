#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, v;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        mp[v]++;
    }
    if (mp[5] or mp[7])
        cout << "-1\n";
    else
    {
        int req = n / 3;
        if (req != mp[1])
            cout << "-1\n";
        else
        {
            bool ok=false;
            if (mp[3])
            {
                int temp = mp[3];
                if (mp[6] < temp)
                {
                    cout << "-1\n";
                    return EXIT_SUCCESS;
                }
                else
                {
                    mp[6] -= temp;
                    ok=true;
                }
            }
            if (mp[2])
            {
                int temp = mp[2];
                int sum = mp[4] + mp[6];
                if (temp != sum)
                {
                    cout << "-1\n";
                    return EXIT_SUCCESS;
                }
                else
                {
                    int t=mp[3];
                    for (int i = 0; i < t; i++)
                    {
                        cout << "1 3 6\n";
                    }
                    t = mp[4];
                    for (int i = 0; i < t; i++)
                    {
                        cout << "1 2 4\n";
                    }
                    t = mp[6];
                    for (int i = 0; i < t; i++)
                    {
                        cout << "1 2 6\n";
                    }
                }
            }
            else 
            {
                if(ok) 
                {
                    int t=mp[3];
                    for (int i = 0; i < t; i++)
                    {
                        cout << "1 3 6\n";
                    }
                }
            } 
            if(mp[2]==0 and mp[3]==0) cout<<"-1\n";
        }
    }
}
