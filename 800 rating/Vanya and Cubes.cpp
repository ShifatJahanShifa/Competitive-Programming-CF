problem link: https://codeforces.com/contest/492/problem/A

#my solutiuon 

#include <bits/stdc++.h>
using namespace std; 

vector<long long>sequence(1005);
void preCalculate()
{
    int add=0;
    for (int i = 0; i <1005; i++)
    {
        add+=i+1;
        sequence[i]=add;
    }
    for (int i = 1; i <1005; i++)
    {
        sequence[i]+=sequence[i-1];
    }
} 

int binarySearch(int key) 
{
    if(binary_search(sequence.begin(),sequence.end(),key))
    {
        return (lower_bound(sequence.begin(),sequence.end(),key))-sequence.begin()+1;
    } 
    return (lower_bound(sequence.begin(),sequence.end(),key))-sequence.begin();
}

int main()
{
    int n, t;
    cin >> n;
    preCalculate();
    cout<<binarySearch(n);
}
