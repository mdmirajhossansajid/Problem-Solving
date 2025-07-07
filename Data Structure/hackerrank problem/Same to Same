https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-07/challenges/same-to-same-1

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
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int count_linked_list(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    return count;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head1, tail1, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (cin >> val && val != -1)
    {
        insert_at_tail(head2, tail2, val);
    }

    int sz1 = count_linked_list(head1);
    int sz2 = count_linked_list(head2);

    if (sz1 != sz2)
    {
        cout << "NO" << endl;
    }
    else
    {
        Node *tmp1 = head1;
        Node *tmp2 = head2;
        int flag = 0;

        while (tmp1 != NULL && tmp2 != NULL)
        {
            if (tmp1->val != tmp2->val)
            {
                flag = 1;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }

        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
