https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

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

    replace_if(a.begin(), a.end(), [](int x)
               { return x > 0; }, 1);

    replace_if(a.begin(), a.end(), [](int x)
               { return x < 0; }, 2);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}
