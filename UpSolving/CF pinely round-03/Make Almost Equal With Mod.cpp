#include <bits/stdc++.h>
using namespace std;
typedef int long long llt;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;cin>>n;
        vector<llt>a(n);
        for(auto &it:a) cin>>it;
        vector<bitset<64>>binary;
        for (int i = 0; i <n; i++)
        {
            binary.push_back(a[i]);
        }
        int ans=1;
        bool ok=false;
        for (int i = 0; i <64; i++)
        {
            for (int j = 1; j <n; j++)
            {
                if(binary[j][i]!=binary[j-1][i]) 
                {
                    ans+=i;
                    ok=true;
                    break;
                }
            }
            if(ok) break;
        }
        cout<<(1LL<<ans)<<"\n";
    }
}
