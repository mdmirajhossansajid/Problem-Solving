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
void inorder(Node* root)
{
    if(root==NULL)
        return ;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void preorder(Node* root)
{
    if(root==NULL)
        return ;
    
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL)
        return ;
    
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
void level_order_traverse(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* f=q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left!=NULL)
            q.push(f->left);
        if(f->right!=NULL)
            q.push(f->right);
    }

}
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
int main()
{
    Node* root = Input_Tree();
   
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    level_order_traverse(root);


    return 0;
}
