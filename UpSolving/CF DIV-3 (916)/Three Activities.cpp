#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, v;
        cin >> n;
        vector<pair<int,int>>first(n);
        vector<pair<int,int>>second(n);
        vector<pair<int,int>>third(n);  
        for (int i = 0; i <n; i++)
        {
            cin>>v;
            first[i]=make_pair(v,i);
        }
        for (int i = 0; i <n; i++)
        {
            cin>>v;
            second[i]=make_pair(v,i);
        }
        for (int i = 0; i <n; i++)
        {
            cin>>v;
            third[i]=make_pair(v,i);
        }
        
        sort(first.begin(), first.end());
        sort(second.begin(), second.end());
        sort(third.begin(), third.end());
        reverse(first.begin(), first.end());
        reverse(second.begin(), second.end());
        reverse(third.begin(), third.end());

        int ans = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if(first[i].second!=second[j].second and first[i].second!=third[k].second and second[j].second!=third[k].second)
                    ans=max(ans,(first[i].first+second[j].first+third[k].first));
                }
            }
        }

        cout << ans << "\n";
    }
}
