#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node* left;
  Node* right;
  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};
int max_height(Node* root)
{
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 1;
    int l=max_height(root->left);
    int r = max_height(root->right);
    return max(l,r)+1;
}
int count_Nodes(Node* root)
{
    if(root==NULL)
        return 0;
    int l=count_Nodes(root->left);
    int r=count_Nodes(root->right);
    return l+r+1;
}
Node* input_Tree()
{
    int val;cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node (val);
    queue<Node* >q;
    q.push(root);
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        int l,r;cin>>l>>r;
        Node*myleft,*myright;
        if(l==-1) myleft=NULL;
        else myleft=new Node(l);
        if(r==-1) myright=NULL;
        else myright=new Node(r);
        temp->left=myleft;
        temp->right=myright;
        if(temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return root;
}
int main()
{
    Node*root=input_Tree();
    int maxDepth=max_height(root);
    int total_nodes=count_Nodes(root);
    int cal=pow(2,maxDepth)-1;
    if(total_nodes==cal)
        cout<<"YES";
    else cout<<"NO";
    
    return 0;
}
