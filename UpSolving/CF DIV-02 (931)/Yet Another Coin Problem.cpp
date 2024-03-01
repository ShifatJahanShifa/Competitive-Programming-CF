#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    int arr[31]={0,1,2,1,2,3,1,2,3,2,1,2,2,2,3,1,2,3,2,3,2,2,3,3,3,2,3,3,3,4,2};
    while (T--)
    {
        int n;cin>>n;
        if(n<31) cout<<arr[n]<<"\n";
        else{
        int ans=(n/15)-1;
        ans+=arr[n-(ans*15)];
        cout<<ans<<"\n";}
    }
}
