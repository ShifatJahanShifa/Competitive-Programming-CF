link: https://codeforces.com/problemset/problem/1237/A

my solution: 

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;cin>>N;
    double arr[N];
    for (int i = 0; i <N; i++)
    {
        cin>>arr[i];
    }
    bool pos=true,neg=true;
    for (int i = 0; i <N; i++)
    {
        if(int(arr[i])&1)
        {
            if(arr[i]>0)
            {
                if(pos) 
                {
                    arr[i]=floor(arr[i]/2);
                    pos=false;
                }
                else
                {
                    arr[i]=ceil(arr[i]/2);
                    pos=true;
                }
            }
            else 
            {
                if(neg) 
                {
                    arr[i]=ceil(arr[i]/2);
                   // cout<<arr[i]<<"#\n";
                    neg=false;
                }
                else
                {
                    arr[i]=floor(arr[i]/2);
                    neg=true;
                }
            }
        }
        else 
        {
            arr[i]/=2;
        }
    }
    for (int i = 0; i <N; i++)
    {
        if(abs(arr[i])==0) arr[i]=abs(arr[i]);
        cout<<arr[i]<<"\n";
    }
}
