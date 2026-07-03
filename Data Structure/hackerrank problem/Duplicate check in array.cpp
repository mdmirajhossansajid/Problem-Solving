https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-07/challenges/duplicate-12
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
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
