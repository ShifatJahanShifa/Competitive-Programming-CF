#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c = 0;
        map<string,int>mp;
        string s[3][n];
        while (c < 3)
        {
            for (int i = 0; i < n; i++)
            {
                cin >> s[c][i];
                mp[s[c][i]]++;
            }
            c++;
        }

        long long pts=0;
        c = 0;
        while (c < 3)
        {
            for (int i=0;i<n;i++)
            {
                if(mp[s[c][i]]==1) pts+=3;
                else if(mp[s[c][i]]==2) pts+=1; 
            }
            cout<<pts<<" "; pts=0;
            c++;
        }
        puts("");
    }
}