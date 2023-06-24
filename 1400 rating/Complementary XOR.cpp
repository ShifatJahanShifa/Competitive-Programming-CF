link: https://codeforces.com/contest/1750/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    while (T--)
    {
        int n; cin>>n;
        string a,b; cin>>a>>b;
        bool same=false,dif=false;
        int one=0;
        vector<int>position;
        for (int i = 0; i <n; i++)
        {
            if(a[i]==b[i]) same=true;
            else dif=true;
            if(a[i]=='1')
            {
                one++;
                position.push_back(i+1);
            }
        }
        if(same and dif) puts("NO");
        else
        {
            puts("YES");
            if(same)
            {
                if(one&1)
                {
                    cout<<one+3<<"\n";
                    for (int i = 0; i <position.size(); i++)
                    {
                        cout<<position[i]<<" "<<position[i]<<"\n";
                    }
                    cout<<1<<" "<<1<<"\n";
                    cout<<2<<" "<<n<<"\n";
                    cout<<1<<" "<<n<<"\n";
                }
                else
                {
                    cout<<one<<"\n";
                    for (int i = 0; i <position.size(); i++)
                    {
                        cout<<position[i]<<" "<<position[i]<<"\n";
                    }
                }
            }
            else if(dif)
            {
                if(one&1) {
                    cout<<one<<"\n";
                    for (int i = 0; i <position.size(); i++)
                    {
                        cout<<position[i]<<" "<<position[i]<<"\n";
                    }
                }
                else
                {
                    cout<<one+3<<"\n";
                    for (int i = 0; i <position.size(); i++)
                    {
                        cout<<position[i]<<" "<<position[i]<<"\n";
                    }
                    cout<<1<<" "<<1<<"\n";
                    cout<<2<<" "<<n<<"\n";
                    cout<<1<<" "<<n<<"\n";
                }
            }
        }
    }
}

