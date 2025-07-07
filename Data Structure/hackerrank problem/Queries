https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-07/challenges/queries-6-1/submissions/code/1394081482


#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if (tail == NULL) {
        tail = newNode;
    }
}

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void delete_at_index(Node*& head, Node*& tail, int idx) {
    if (idx < 0 || head == NULL) return;

    if (idx == 0) {
        Node* delNode = head;
        head = head->next;
        delete delNode;
        if (head == NULL) tail = NULL; // If list becomes empty
        return;
    }

    Node* temp = head;
    for (int i = 0; i < idx - 1; i++) {
        if (temp == NULL || temp->next == NULL) return; // Invalid index
        temp = temp->next;
    }

    if (temp->next == NULL) return; // Invalid index again
    Node* delNode = temp->next;
    temp->next = delNode->next;

    if (delNode == tail) {
        tail = temp; // If tail was deleted
    }

    delete delNode;
}

void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;

    Node* head = NULL;
    Node* tail = NULL;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            insert_at_head(head, tail, V);
        } else if (X == 1) {
            insert_at_tail(head, tail, V);
        } else if (X == 2) {
            delete_at_index(head, tail, V);
        }

        print_list(head);
    }

    return 0;
}
