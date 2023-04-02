problem link: https://codeforces.com/contest/1798/problem/D

                                      solution 
 -------------------------------------------------------------------------------------------------------
 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m,zeros=0;
        cin >> n;
        vector<int>neg,pos;
        for (int i = 0; i <n; i++)
        {
            cin>>m;
            if(m<0) neg.push_back(m);
            else if(m==0) zeros++;
            else pos.push_back(m);
        }
        sort(pos.begin(),pos.end());
        sort(neg.begin(),neg.end());
        if(zeros==n) puts("NO");
        else 
        {
            puts("YES");
            for (int i = 0; i < zeros; i++)
            {
                cout<<0<<" ";
            }
            int lenP=pos.size(),lenN=neg.size();
            int k=0,p=0;
            reverse(pos.begin(),pos.end()); 
            long long sum=0;
            long long cnst=pos[0]-neg[0];
           // cout<<cnst<<"* \n";
            while (k<lenP)
            {
                if(pos[k]+sum>=cnst)
                {
                    while (pos[k]+sum>=cnst)
                    {
                        cout<<neg[p]<<" ";
                        sum+=neg[p];
                        p++;
                    }
                }
                cout<<pos[k]<<" ";
                sum+=pos[k];
                k++;
            }
            for (int i = p; i < lenN; i++)
            {
                cout<<neg[i]<<" ";
            }
            puts("");
        }
    }
}
