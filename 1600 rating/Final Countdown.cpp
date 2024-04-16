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
        string s;cin>>s;
        int pre[n];
        pre[0]=s[0]-'0';
        for (int i = 1; i <n; i++)
        {
            pre[i]=pre[i-1]+(s[i]-'0');
        }
        vector<int>ans;
        int carry=0,sum;
        for (int i = n-1; i>-1; i--)
        {
            sum=carry;
            sum+=pre[i];
            ans.push_back(sum%10);
            carry=sum/10;
        }
        if(carry) ans.push_back(carry);
        int nonzero=1;
        for (int i =ans.size()-1; i>-1; i--)
        {
            if(ans[i]==0 and nonzero) continue; 
            else 
            {
                cout<<ans[i]; 
                nonzero=0;
            }
        }
        puts("");
    }
}
