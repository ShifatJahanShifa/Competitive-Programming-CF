#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;

// ll BE(ll a,ll b)
// {
//     ll ans=1LL;
//     while(b)
//     {
//         if(b%2LL) ans*=a;
//         ans%=mod;
//         a*=a;
//         a%=mod;
//         b/=2LL;
//     }
//     return ans;
// }  

int Ask(string s) 
{

    cout << '?' << " " << s<<endl;
    cout.flush();
    int res;
    cin>>res;
    return res;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string finalString="";
        while (finalString.size()<n)
        {
            if(Ask(finalString+"0")) 
            {
                finalString+='0';
            }
            else if(Ask(finalString+"1"))
            {
                finalString+='1';
            }
            else break;
        }
        if(finalString.size()<n) 
        {
            (finalString[0]=='0') ? finalString="1"+finalString: finalString="0"+finalString;
        }
        while (finalString.size()<n)
        {
            if(Ask("0"+finalString)) 
            {
                finalString="0"+finalString;
            }
            else if(Ask("1"+finalString))
            {
                finalString="1"+finalString;
            }
        }
        
        cout << '!' << " " << finalString << endl;
        cout.flush();
    }
}

// 0011001
