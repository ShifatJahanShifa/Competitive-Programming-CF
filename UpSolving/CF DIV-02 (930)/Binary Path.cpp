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
        string ans = "", s1, s2;
        cin >> s1 >> s2;
        bool scnd = false;
        int mark = n;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] < s2[i])
                ans += s1[i];
            else if (s1[i] < s2[i])
            {
                ans += s1[i];
                scnd = true;
                mark = i;
                break;
            }
            else
            {
                ans += s1[i];
                if (i < n - 1)
                {
                    if (s1[i + 1] > s2[i])
                    {
                        scnd = true;
                        mark = i;
                        break;
                    }
                }
            }
        }
        if(scnd) 
        {
            for (int i =mark; i <n; i++)
            {
                ans+=s2[i];
            }
        }
        else 
        {
            ans+=s2[n-1];
        }
        cout<<ans<<"\n";
        vector<int>ocnt(n+1,0),seco(n,0);
        if(ans[0]=='1') ocnt[0]=1;
        if(s2[0]=='1') seco[0]=1;
        for (int i = 1; i <=n; i++)
        {
            if(ans[i]=='1') ocnt[i]=ocnt[i-1]+1;
            else ocnt[i]=ocnt[i-1];
        }
        for (int i = 1; i <n; i++)
        {
            if(s2[i]=='1') seco[i]=seco[i-1]+1;
            else seco[i]=seco[i-1];
        }
        int potential=1;
        for (int i = 0; i <mark; i++)
        {
            if(s1[i+1]==s2[i]) 
            {
                int cnt1=ocnt[n]-ocnt[i+1];
                int cnt2=seco[n-1]-seco[i];
                if(cnt1==cnt2) potential++;
            }
        }
        cout<<potential<<"\n";
        
    }
}
