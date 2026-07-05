https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-07/challenges/leaf-nodes-1
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
vector<int> ans;
Node* input_tree()
{
    int x;cin>>x;
    Node* root;
    if(x==-1) root=NULL;
    else 
     root=new Node(x);
    queue<Node* >q;
    if(root)
    q.push(root);
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        int l,r;cin>>l>>r;
        Node* myleft,*myright;
        if(l==-1) myleft=NULL;
        else myleft=new Node(l);
        if(r==-1) myright=NULL;
        else myright=new Node(r);
        temp->left=myleft;
        temp->right=myright;
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
    return root;
}
void countleafnode(Node* root)
{
   
    if(root==NULL)
    return ;
    if(root->left==NULL && root->right==NULL)
    {
        ans.push_back(root->val);
        return;
    }
    countleafnode(root->left);
    countleafnode(root->right);
    

}
int main()
{
    Node* root=input_tree();
    countleafnode(root);
    sort(ans.rbegin(), ans.rend());
    for(int x : ans)
    {
        cout<<x<<" ";
    }

    return 0;
}
