link: https://codeforces.com/contest/1139/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ans = 0, comp;
    ans += arr[n - 1];
    comp = arr[n - 1];
    for (int i = n - 2; i > -1; i--)
    {
        if ((arr[i] > arr[i + 1]))
        {
            if (arr[i + 1])
            {
                comp = arr[i + 1] - 1;
                arr[i] = comp;
            }
            else
            {
                comp = 0;
                arr[i] = comp;
            }
        }
        else if ((arr[i] == arr[i + 1]))
        {
            if (arr[i])
            {
                arr[i]--;
                comp = arr[i];
            }
            else
            {
                comp = 0;
                arr[i] = comp;
            }
        }
        else
        {
            comp = arr[i];
        }
        ans += comp;
    }
    cout << ans;
}
