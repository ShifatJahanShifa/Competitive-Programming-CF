#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n,m;
        cin >> n;
        vector<int>v(n);
        for (int i = 0; i <n; i++)
        {
            cin>>v[i];
        }
        if(v[0]>n) puts("NO");
        else 
        {
            vector<int>check(n,0);
            for (int i = n-1; i >-1; i--)
            {
                int t=v[i];
                check[t-1]=max(i+1,check[t-1]);
            } 
            // for (int i = n-1; i >-1; i--)
            // {
            //     cout<<check[i]<<" ";
            // }
            cout<<"\n";
            bool ok=true;
            int ex=-1;
            for (int i = 0; i <n; i++)
            {
                if(ex==-1)
                {
                    ex=v[i];
                }
                if(ex!=-1 and v[i]!=ex) 
                {
                    ok=false;
                    break;
                }
                else if(ex!=-1 and v[i]==ex) 
                {
                    if(check[i]!=0)
                    {
                        if(check[i]!=v[i]) 
                        {
                            ok=false;
                            break;
                        }
                        else ex=-1;
                    }
                }   
            }
            ok ? cout<<"YES\n" : cout<<"NO\n";
        }
    }
}
