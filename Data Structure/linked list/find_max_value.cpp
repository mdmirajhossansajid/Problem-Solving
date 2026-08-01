#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};
int find_max_value(Node* head)
{
    int mx=INT_MIN;
    Node *temp=head;
    while(temp!=NULL)
    {
        mx=max(temp->val,mx);
        temp=temp->next;
    }
    return mx;
}
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    } 
    tail->next=newnode;
    tail=newnode;

}
int main()
{   Node* head=NULL;
    Node* tail=NULL;
    int x;
    while(cin>>x && x!=-1)
    {
        insert_at_tail(head,tail,x);
    }
    cout<<find_max_value(head);
    
    
    
    return 0;
}
