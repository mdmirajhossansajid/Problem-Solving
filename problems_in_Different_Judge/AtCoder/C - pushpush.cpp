#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            dq.push_front(arr[i]);
        }
        else
            dq.push_back(arr[i]);
    }
    if (n % 2 == 0)
    {
        reverse(dq.begin(), dq.end());
    }
    for (int x : dq)
    {
        cout << x << " ";
    }
    return 0;
}
