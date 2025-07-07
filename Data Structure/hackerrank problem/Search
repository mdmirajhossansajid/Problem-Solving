https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-07/challenges/search-12

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

int find_index(Node *head, int tar_val)
{
    int idx = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == tar_val)
        {
            return idx;
        }
        tmp = tmp->next;
        idx++;
    }
    return -1;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        // Read the linked list values
        while (true)
        {
            int val;
            cin >> val;
            if (val == -1)
                break;
            insert_at_tail(head, tail, val);
        }

        // Read the target value
        int tar_val;
        cin >> tar_val;

        // Find and print the index
        int result = find_index(head, tar_val);
        cout << result << endl;

        // Optional: free memory if needed (not required here)
    }

    return 0;
}
