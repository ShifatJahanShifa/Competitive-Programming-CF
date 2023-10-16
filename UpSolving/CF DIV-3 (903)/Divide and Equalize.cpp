#include <bits/stdc++.h>
using namespace std;

const int n = 1000005;
int arr[n];
vector<int> highestPrime(n, 0), lowestPrime(n, 0);
set<int> primeFactor;
map<int, int> mp;

void sieve()
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1;
	}
	arr[0] = 0;
	arr[1] = 0;

	for (int i = 2; i < n; i++) // O(n)
	{
		if (arr[i])
		{
			highestPrime[i] = i;
			lowestPrime[i] = i;
			for (int j = i + i; j < n; j += i) // o(loglogn)
			{
				arr[j] = 0;
				highestPrime[j] = i;
				if (lowestPrime[j] == 0)
				{
					lowestPrime[j] = i;
				}
			}
		}
	}
}

void primeFactorization(int D) // o(logn)
{
	int temp = D, primeF;
	while (temp > 1)
	{
		primeF = highestPrime[temp];
		while (temp % primeF == 0)
		{
			// primeFactors[D].push_back(primeF);
			primeFactor.insert(primeF);
			mp[primeF]++;
			temp /= primeF;
		}
	}
}

int main()
{
	sieve();
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		primeFactor.clear();
		mp.clear();
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
			primeFactorization(v[i]);
		}
		int ok = true;
		for (auto it : primeFactor)
		{
			if (mp[it] % n)
			{
				ok = false;
				break;
			}
		}
		ok ? puts("YES") : puts("NO");
	}
}
