7.5 practice problem 1:::::::::::::::::::::::::::


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
int count_linked_list(Node* &head)
{   int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;

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
    Node* head1=NULL;
    Node* tail1=NULL;
    while(cin>>x && x!=-1)
    {
        insert_at_tail(head1,tail1,x);
    }
    int sz=count_linked_list(head);
    int sz2=count_linked_list(head1);
    if(sz==sz2)
    {
        cout<<"YES";
       
    }
    else

    {
        cout<<"NO";
    }
    return 0;
}
