#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T; cin>>T;
    while (T--)
    {
        int n; cin>>n;
        for (int i = 0; i <n; i++)
        {
            cout<<n-i<<" ";
        }
        cout<<n<<" ";
        for (int i = 1; i <n; i++)
        {
            cout<<i<<" ";
        }
        puts("");
    }
    
}
