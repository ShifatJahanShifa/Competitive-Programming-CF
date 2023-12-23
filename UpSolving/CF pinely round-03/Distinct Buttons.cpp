#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, x, y;
        cin >> n;
        bool first = false, second = false, third = false, fourth = false;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            if (y >0)
            {
                first = true;
            }
            if (x < 0)
            {
                second = true;
            }
            if ( y < 0)
            {
                third = true;
            }
            if (x > 0)
            {
                fourth = true;
            }
        }

        if (first and third and second and fourth)
            puts("NO");
        else puts("YES");
    }
}
