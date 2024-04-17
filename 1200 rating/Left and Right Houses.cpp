#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int total=0,apatoto=(n+1)/2;
        for (int i = 0; i <n; i++)
        {
            total+=(s[i]=='1');
        }
        vector<int>idx;
        if(total==0) 
        {
            idx.push_back(n);
        }
        else if(total==n) 
        {
            idx.push_back(0);
        }
        //if(total==apatoto) idx.push_back(1);
        int temp=0,baki=0,mid1=0,mid2=0,zero=0;
        for (int i = 0; i <n-1; i++)
        {
            temp+=(s[i]=='1');
            zero=(i+1)-temp;
            baki=total-temp;
            mid1=((i+2)/2);
            mid2=(n-i)/2;
            if(zero>=mid1 and baki>=mid2) 
            {
                idx.push_back(i+1);
            }
        }
        int mid;
        mid=n/2;
        int mini=INT_MAX,val=INT_MAX,dis=0;
        int check=0;
        for (int i = 0; i <idx.size(); i++)
        {
            //cout<<idx[i]<<" ";
            dis=abs(idx[i]*2-n);
            //cout<<dis<<"\n";
            if(dis<mini) 
            {
                mini=dis;
                val=idx[i];
                check=1;
            }
        }
        if(check==0) 
        {
            if(total>=apatoto)
            val=0;
            else val=n;
        }
        cout<<val<<"\n";
    }
    
} 

// oo1  110
