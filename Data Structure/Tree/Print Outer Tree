
https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-07/challenges/print-outer-tree

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

// Binary tree input in level order
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        return NULL;
    root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *cur = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            cur->left = new Node(l);
            q.push(cur->left);
        }
        if (r != -1)
        {
            cur->right = new Node(r);
            q.push(cur->right);
        }
    }

    return root;
}
void right_outer(Node *root)
{
    if (root == NULL )
        return;

    cout << root->val << " ";

    if (root->right)
        right_outer(root->right);
    else
        right_outer(root->left);
}
void left_outer(Node *root)
{
    
    if (root == NULL)
        return;
    if (root->left)
        left_outer(root->left);
    else
        left_outer(root->right);
    cout << root->val << " ";
}

int main()
{
    Node *root = input_tree();
    left_outer(root->left);
    cout<<root->val<<" ";
    right_outer(root->right);

    return 0;
}
