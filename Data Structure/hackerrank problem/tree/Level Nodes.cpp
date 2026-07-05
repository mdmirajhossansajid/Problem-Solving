https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-07/challenges/level-nodes-2
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
vector<int> ans;
Node *input_tree()
{
    int x;
    cin >> x;
    Node *root;
    if (x == -1)
        root = NULL;
    else
        root = new Node(x);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);
        temp->left = myleft;
        temp->right = myright;
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return root;
}
void levelorder(Node* root,int x)
{
    queue<pair<Node* ,int>>q;
    if(root)
      q.push({root,0});
    int flag = 0;
    while(!q.empty())
    {
        
        pair<Node*,int>parent=q.front();
        q.pop();
        Node*temp=parent.first;
        int level=parent.second;
        if(level==x)
        {
            
            cout<<temp->val<<" ";
            flag = 1;
        }
        if(temp->left)
          q.push({temp->left,level+1});
        if (temp->right)
            q.push({temp->right, level + 1});
    }
    if(flag==0)
    cout<<"Invalid";
}
int main()
{
    Node *root = input_tree();
    int val;cin>>val;
    levelorder(root,val);

    return 0;
}
