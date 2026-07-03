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
Node * Input_Tree()
{
    int val;cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else 
    root=new Node(val);
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* f=q.front();
        q.pop();
        int left_value,right_value;
        cin>>left_value>>right_value;
        Node* myleft,*myright;
        if(left_value==-1) myleft=NULL;
        else myleft=new Node(left_value);
        if(right_value==-1) myright=NULL;
        else myright=new Node(right_value);
        f->left=myleft;
        f->right=myright;
        if(f->left!=NULL)
            q.push(f->left);
        if(f->right!=NULL)
    q.push(f->right);

    }
    return root;
}
int count_binary_tree_Nodes(Node* root)
{
    if(root==NULL)
        return 0;
    int l=count_binary_tree_Nodes(root->left);
    int r=count_binary_tree_Nodes(root->right);
    return l+r+1;

}
int count_leaf_Node(Node* root)
{
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 1;
    int l=count_leaf_Node(root->left);
    int r=count_leaf_Node(root->right);
    return l+r;

}
int main()
{
    Node* root = Input_Tree();
    cout<<count_binary_tree_Nodes(root);
    cout<<endl;
    cout<<count_leaf_Node(root);
     return 0;
}
