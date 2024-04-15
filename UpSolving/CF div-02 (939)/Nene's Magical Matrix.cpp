#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz=2e5+5;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        int sum=0;
        int cnt=n*2-1;
        for (int i = n; i>0; i--)
        {
            sum+=(i*cnt);
            cnt-=2;
        }
        cout<<sum<<" "<<2*n<<"\n";
        for (int i = n; i>0; i--)
        {
            cout<<"1 "<<i<<" ";
            for (int j = 1; j <=n; j++)
            {
                cout<<j<<" \n"[j==n];
            }
            cout<<"2 "<<i<<" ";
            for (int j = 1; j <=n; j++)
            {
                cout<<j<<" \n"[j==n];
            }
        }
    }
    
}
