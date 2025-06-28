https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-07/challenges/insert-the-vector

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int index;
    cin >> index;
    a.insert(a.begin() + index, b.begin(), b.end());
    for (int i = 0; i < (n + m); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
