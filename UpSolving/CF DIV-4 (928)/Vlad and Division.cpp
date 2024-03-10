#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;cin>>n;
        vector<int>v(n);
        for(auto &it:v) cin>>it;
        vector<int>odd,even;
        for (int i = 0; i <n; i++)
        {
            if(v[i]&1) odd.push_back(v[i]);
            else even.push_back(v[i]);
        }
        int group=odd.size()+even.size();
        map<string,int>st;
        for (int i = 0; i <odd.size(); i++)
        {
            bitset<31>btst(odd[i]);
            st[btst.to_string()]++;
        }
        for (int i = 0; i <even.size(); i++)
        {
            bitset<31>btst(even[i]);
            btst.flip();
            string check=(btst.to_string());
            if(st[check]) 
            {
                group--;
                st[check]--;
            }
        }
        cout<<group<<"\n";
    }
}
