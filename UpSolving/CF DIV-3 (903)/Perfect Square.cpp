#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;cin>>T;
	while (T--)
	{
		int n;cin>>n;
		char mat[n][n];
		getchar();
		for (int i = 0; i <n; i++)
		{
			for (int j = 0; j <n; j++)
			{
				cin>>mat[i][j];
			}
			getchar();
		}
		
		int r,c,ans=0;
		for (int i = 0; i*2 <n; i++)
		{
			for (int j=0 ; j*2 <n; j++)
			{
				vector<char>alpha{mat[i][j],mat[j][n-1-i],mat[n-1-j][i],mat[n-1-i][n-1-j]};
				char max=*max_element(alpha.begin(),alpha.end());	
				for(auto ch:alpha) ans+=max-ch;
			}
		}
		cout<<ans<<"\n";
	}
}
