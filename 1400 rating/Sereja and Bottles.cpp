#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() // bs
{
    int n;cin>>n;
    vector<int>a(n),b(n);
    for (int i = 0; i <n; i++)
    {
        cin>>a[i]>>b[i];
    }
    int done=0;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            if(a[i]==b[j] and i!=j) {
                done++;
                break;
            }
        }
    }
    cout<<n-done<<"\n";
}
