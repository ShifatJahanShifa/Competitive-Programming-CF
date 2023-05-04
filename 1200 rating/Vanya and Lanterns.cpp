problem link: https://codeforces.com/contest/492/problem/B

my solution: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    vector<int> lanternPoints(n);
    for (int i = 0; i < n; i++)
    {
        cin >> lanternPoints[i];
    }

    sort(lanternPoints.begin(), lanternPoints.end());
    int maxDistance = 0;
    for (int i = 1; i < n; i++)
    {
        maxDistance = max(maxDistance, lanternPoints[i] - lanternPoints[i - 1]);
    }

    double d1 = (double)(lanternPoints[0] - 0);
    double d2 = (double)(l - lanternPoints[n - 1]);
    double D = (double)maxDistance;
    D /= 2;
    double ans = max(d1, max(d2, D));
    printf("%.9lf\n", ans);
}
