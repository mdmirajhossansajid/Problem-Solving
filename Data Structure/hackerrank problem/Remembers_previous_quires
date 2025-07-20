https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-7/challenges/remember-previous-queries

#include <bits/stdc++.h>
using namespace std;

void delete_any_position(list<int>& l, int idx)
{
    if (idx < 0 || idx >= l.size()) return; 
    auto it = l.begin();
    for (int i = 0; i < idx; i++)
    {
        it++;
    }
    l.erase(it);
}

void print_forward(list<int>& l)
{
    cout << "L -> ";
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

void print_backward(list<int>& l)
{
    cout << "R -> ";
    vector<int> temp(l.begin(), l.end());
    reverse(temp.begin(), temp.end());
    for (int val : temp)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else if (x == 2)
        {
            delete_any_position(l, v);
        }

        print_forward(l);
        print_backward(l);
    }
    return 0;
}
