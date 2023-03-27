## trie related problem

problem link: https://codeforces.com/contest/706/problem/D

-------------------------------------------------------------------------------------------------------------------------------------------
                                                solution
  -------------------------------------------------------------------------------------------------------------------------------------
  
  #include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *links[2]={NULL};
    int count[2]={0};
    bool isContain(int bit)
    {
        return links[bit] != NULL;
    }

    void put(int bit, Node *node)
    {
        links[bit] = node;
    }

    Node *get(int bit)
    {
        return links[bit];
    }
};

Node *root = new Node;

void insert(int x)
{
    Node *node = root;
    for (int i = 31; i >= 0; i--)
    {
        int bit = (x >> i) & 1;
        if (!node->isContain(bit))
        {
            node->put(bit, new Node);
        }
        node->count[bit]+=1;
        node = node->get(bit);

    }
}

void Delete(int x)
{
    Node *node = root;
    for (int i = 31; i >= 0; i--)
    {
        int bit = (x >> i) & 1;
        node->count[bit]-=1;
        if(node->count[bit]==0)
        {
            Node *temp;
            temp=node->links[bit];
            node->links[bit]=NULL;
            node=temp;
            continue;
        }
       // node->put(bit,NULL);
        node = node->get(bit);

    }
}

int getXOR(int x)
{
    Node *node = root;
    int num = 0;
    for (int i = 31; i >= 0; i--)
    {
        int bit = (x >> i) & 1;
        if (node->isContain(1 - bit))
        {
            num = num | (1 << i);
            node = node->get(1 - bit);
        }
        else
        {
            node = node->get(bit);
        }
    }
    return num;
}

int main()
{
    int Q;
    cin >> Q;
    char ch;
    int x;
    insert(0);
   // getchar();
    while (Q--)
    {
        getchar();
        cin >> ch;
        cin >> x;

        if (ch == '+')
            insert(x);
        else if (ch == '-')
            Delete (x);
        else {
            cout<<getXOR(x)<<"\n";
        }
    }
}
