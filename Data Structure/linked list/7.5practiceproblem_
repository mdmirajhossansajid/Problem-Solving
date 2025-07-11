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
int sz=0;
void insert_at_head(Node* &head, Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    } 
    newnode->next=head;
    head=newnode;
    sz++;
    
}
void insert_at_tail(Node* &head, Node* &tail,int val)
{
    Node* newnode=new Node(val);
    sz++;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    } 
    tail->next=newnode;
    tail=newnode;

}
void insert_at_any_position(Node* &head, int position,int val)
{   
    Node* newnode=new Node(val);
    sz++;
    Node* temp=head;
    for(int i=0;i<position-1;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;

}
int linkedlist_size(Node* head)
{
    return sz;
}
void printing(Node* head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int x;
    while(cin>>x && x!=-1)
    {
        insert_at_tail(head,tail,x);
    }
    int q;
    cin>>q;
    int idx,val;
    while(cin>>idx>>val)
    {
        int sizee=linkedlist_size(head);
        if(idx>sizee)
        {
            cout<<"Invalid\n";
            continue;
        }
        else if(idx==sizee)
        {
            insert_at_tail(head,tail,val);
        }
        else if(idx==0)
        {
            insert_at_head(head,tail,val);
        }
        else
        {
            insert_at_any_position(head,idx,val);
        }
        printing(head);
    }

    
    return 0;
}
