problem link: https://codeforces.com/contest/713/problem/A

                                          solution
 -----------------------------------------------------------------------------------------------------------------------------------
 
 #include <bits/stdc++.h>
using namespace std;

struct Node
{
     Node *links[2] = {NULL};
     int count[2] = {0};
     bool isContain(int p)
     {
          return links[p] != NULL;
     }

     void put(int p, Node *node)
     {
          links[p] = node;
     }

     Node *get(int p)
     {
          return links[p];
     }
};

Node *root = new Node;

void insert(long long x)
{
     Node *node = root;
     int remainder,cnt=0;
     while (x)
     {
          remainder=x%2;
          remainder ? node->count[1]++: node->count[0]++;
          if (!node->isContain(remainder))
          {
               node->put(remainder,new Node);
          }
          node=node->links[remainder];
          x/=10;
          cnt++;
     }
     while (cnt<19)
     {
          node->count[0]++;
          if (!node->isContain(0))
          {
               node->put(0,new Node);
          }
          node=node->links[0];
          cnt++;
     }
}

void Delete(long long int x)
{
     Node *node = root;
     int remainder,cnt=0;
     while (x)
     {
          remainder=x%2;
          remainder ? node->count[1]--: node->count[0]--;
          node=node->links[remainder];
          x/=10;
          cnt++;
     }
     while (cnt<19)
     {
          node->count[0]--;
          node=node->links[0];
          cnt++;
     }
}

int getCount(string s)
{
     Node *node = root;
     int ans = INT_MAX;
     int len=s.size();
     for (int i = 0; i <len; i++)
     {
          int parity=s[i]-'0';
          ans=min(ans,node->count[parity]);
          if(node->isContain(parity))
          node=node->links[parity];
          else return 0;
     }
     for (int i = len; i < 18; i++)
     {
          ans=min(ans,node->count[0]);
          if(node->isContain(0))
          node=node->links[0];
          else return 0;

     }

     return ans;
}

int main()
{
     int Q;
     cin >> Q;
     char ch;
     long long int x;
     string s;

     while (Q--)
     {
          getchar();
          cin >> ch;
          if (ch == '?')
               cin >> s;
          else
               cin >> x;

          if (ch == '+')
               insert(x);
          else if (ch == '-')
               Delete(x);
          else
          {
               reverse(s.begin(),s.end());
              // cout<<s<<" *\n";
               cout << getCount(s) << "\n";
          }
     }
}
