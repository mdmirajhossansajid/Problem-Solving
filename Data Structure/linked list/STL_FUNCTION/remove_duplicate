#include <bits/stdc++.h>
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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void remove_duplicates(Node *head)
{
    Node *i = head;
    while (i != NULL)
    {
        Node *prev = i;
        Node *j = i->next;
        while (j != NULL)
        {
            if (j->val == i->val)
            {
                prev->next = j->next;
                delete j;
                j = prev->next;
            }
            else
            {
                prev = j;
                j = j->next;
            }
        }
        i = i->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int x;
    while (cin >> x && x != -1)
    {
        insert_at_tail(head, tail, x);
    }

    remove_duplicates(head);
    print_list(head);

    return 0;
}
