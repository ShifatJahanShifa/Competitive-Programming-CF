#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    bool isPalindrome=true;
    int Size=s.size();
    map<char,int>mp;
    for (int i = 0; i < Size; i++)
    {
        mp[s[i]]++;
    }
    int oddCnt=0,evenCnt=0;
    for(auto it:mp) 
    {
        if(it.second%2) oddCnt++;
        else evenCnt++;
    }
   
    if(oddCnt%2!=0) {
        isPalindrome=true;
    }
    else if(oddCnt!=0 and oddCnt%2==0) 
    {
        isPalindrome=false;
    }
    isPalindrome ? cout<<"First\n" : cout<<"Second\n";
}
