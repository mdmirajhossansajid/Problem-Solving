https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-07/challenges/sum-without-leaf

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
        Node *parent = q.front();
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
        parent->left = myleft;
        parent->right = myright;
        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    return root;
}

int count_leaf(Node *root)
{
    int sum = 0;
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;

    sum += root->val;
    sum += count_leaf(root->left);
    sum += count_leaf(root->right);

    return sum;
}
int main()
{
    Node *root = input_tree();
    int w = count_leaf(root);
    cout << w;

    return 0;
}
