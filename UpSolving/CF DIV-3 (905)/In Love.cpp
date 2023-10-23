#include"bits/stdc++.h"
using namespace std;

int main()
{
    int T;cin>>T;
    multiset<int>l,r;
    while (T--)
    {
        char ch; int a,b;
        cin>>ch>>a>>b;
        if(ch=='+') l.insert(a),r.insert(b);
        else 
        {
            l.erase(l.find(a));
            r.erase(r.find(b));
        }
        if(l.size() and *l.rbegin()>*r.begin()) puts("YES");
        else puts("NO"); 
    }
    
}
