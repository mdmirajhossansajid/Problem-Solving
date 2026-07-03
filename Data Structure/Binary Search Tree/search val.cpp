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
Node *input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1)
        root= NULL;
    else
      root=new Node(val);
    queue<Node*>q;
    if(root!=NULL)
    q.push(root);
    while(!q.empty())
    { 
        Node* ft=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* myleft,*myright;
        if(l==-1) myleft=NULL;
        else myleft=new Node(l);
        if(r==-1) myright=NULL;
        else myright=new Node(r);
        ft->left=myleft;
        ft->right=myright;
        if(ft->left!=NULL)
         q.push(ft->left);
        if (ft->right != NULL)
            q.push(ft->right);
    }
    return root;
}
bool search(Node* root,int val)
{
    if(root==NULL)
      return false;
    if(root->val==val)
        return true;
    if(root->val>val)
    return search(root->left,val);
    else
    return search(root->right,val);
}

int main()
{
    Node *root=input_tree();
    int val;cin>>val;
    if(search(root,val))
    cout<<"Found\n";
    else 
    cout<<"NOT Found\n";

    
    return 0;
}
