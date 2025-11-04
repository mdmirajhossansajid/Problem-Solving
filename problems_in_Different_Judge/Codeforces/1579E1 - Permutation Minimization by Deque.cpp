#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<int> dq;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (dq.empty())
                dq.push_back(x);

            else if (x < dq.front())
                dq.push_front(x);

            else
                dq.push_back(x);
        }

        for (int x : dq)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
