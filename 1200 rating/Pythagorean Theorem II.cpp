#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int l = 1e4;

int main()
{
	int n;
	cin >> n;
	int ans = 0;

	for (int a = 3; a <= n; a++)
	{
		for (int b = a + 1; b <= n; b++)
		{

			int aa = a * a, bb = b * b;
			int sum = sqrt(aa + bb);
			if ((sum * sum) == (aa + bb) and sum <= n)
			{
				ans++;
				// cout<<" t "<<a<<" "<<b<<" "<<sum<<"\n";
			}
		}
	}
	cout << ans << "\n";
}
