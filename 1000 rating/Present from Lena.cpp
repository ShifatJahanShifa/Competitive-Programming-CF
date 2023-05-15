problem link: https://codeforces.com/problemset/problem/118/B

my solution 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    m = n * 2 + 1;
    int store[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            store[i][j] = -1;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        store[n][i] = i;
        store[i][n] = i;
    }
    for (int j = n - 1; j > 0; j--)
    {
        for (int i = n - j, k = 0; i < n; i++)
        {
            store[i][j] = k;
            k++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = n + 1, k = n - 1; j < m; j++)
        {
            store[i][j] = store[i][k];
            k--;
        }
    }
    for (int i = n + 1, k = n - 1; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            store[i][j] = store[k][j];
        }
        k--;
    }
    bool ok;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + i; j++)
        {
            if (store[i][j] == -1)
                cout << "  ";
            else
                cout << store[i][j] << " ";
        }
        cout << store[i][n + i];
        puts("");
    }
    for (int i = 0; i < m - 1; i++)
    {
        if (store[n][i] == -1)
            cout << "  ";
        else
            cout << store[n][i] << " ";
    }
    cout << store[n][m - 1] << "\n";
    for (int i = n + 1, k = m-2; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (store[i][j] == -1)
                cout << "  ";
            else
                cout << store[i][j] << " ";
        }
        cout << store[i][k] << "\n";
        k--;
    }
}



// will check later 
#include<iostream>
#include<cmath>
using namespace std;
int n,i,j,k;
int main(){
cin>>n;
for(j=0; j<=2*n;j++){
i=n-abs(j-n);
k=0;
while(k<n-i){cout<<"  "; k++;}
k=i;
while(k>-i){cout<<i-abs(k)<<" ";k--; }
cout<<0<<endl;}
return 0;
}
