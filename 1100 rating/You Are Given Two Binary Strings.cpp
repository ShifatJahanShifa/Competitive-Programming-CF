#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int T;cin>>T;
    while (T--)
    {
        string s1,s2;cin>>s1>>s2;
		int posy=-1,ans=0;
		reverse(s1.begin(),s1.end());
		reverse(s2.begin(),s2.end());
		for (int i = 0; i < s2.size(); i++)
		{
			if(s2[i]=='1') 
			{
				posy=i;
				break;
			}
		}
		for (int i = posy; i < s1.size(); i++)
		{
			if(s1[i]=='1') 
			{
				ans=i-posy;
				break;
			}
		}
		cout<<ans<<"\n";
    }
}
