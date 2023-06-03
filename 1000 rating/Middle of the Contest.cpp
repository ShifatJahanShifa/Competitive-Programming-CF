link: https://codeforces.com/problemset/problem/1133/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string first, second;
    cin >> first >> second;

    int h1 = (first[0] - '0');
    h1 = h1 * 10 + (first[1] - '0');
    int h2 = (second[0] - '0');
    h2 = h2 * 10 + (second[1] - '0');
    int m1 = first[3] - '0';
    m1 = m1 * 10 + (first[4] - '0');
    int m2 = second[3] - '0';
    m2 = m2 * 10 + (second[4] - '0');
    //cout<<h1<<" "<<h2<<" "<<m1<<" "<<m2<<"\n";
    // int hour=h2-h1;
    int min1 = h1 * 60;
    min1 += m1;
    int min2 = h2 * 60;
    min2 += m2;
    int totalMin = min2 - min1;
    //cout << totalMin<<"\n";
    totalMin /= 2;
    while (1)
    {
        m1 += totalMin;
        if (m1>59)
        {
            totalMin=m1-60;
            h1++;
            m1=0;
        }
        else 
        {
            break;
        }
    }
    string ans;
    ans=to_string(h1);
    if(ans.size()==1) 
    {
        ans.insert(0,"0");
    }
    ans+=':';
    ans+=to_string(m1);
    if(ans.size()==4) 
    {
        ans.insert(3,"0");
    }
    cout<<ans;
}
