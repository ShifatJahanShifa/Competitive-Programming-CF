#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz=2e5+5;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m;cin>>n>>m;
        vector<int>v(n);
        for(auto &it:v) cin>>it;
        vector<string>vs;
        vector<int>komano;
        int total=0;
        string temp="";
        for (int i = 0; i <n; i++)
        {
            temp=to_string(v[i]);
            total+=temp.size();
        }
        int cnt=0;
        for (int i = 0; i <n; i++)
        {
            cnt=0;
            while (v[i]%10==0)
            {
                cnt++;
                v[i]/=10;
            }
            komano.push_back(cnt);
        }
        sort(komano.begin(),komano.end(),greater<int>());
        int mid=0;
        for (int i = 0; i <komano.size(); i++)
        {
            mid+=komano[i];
            i++;
        }
        total-=mid;
        total<(m+1) ? cout<<"Anna\n": cout<<"Sasha\n";
    }   
}
