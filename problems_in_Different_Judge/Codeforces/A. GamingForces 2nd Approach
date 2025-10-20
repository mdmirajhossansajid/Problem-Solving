#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int cnt = 0;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i = i + 2)
            {
                if (arr[i] == 1 && arr[i + 1] == 1)
                    cnt += 1;
                else if (arr[i] > 1 && arr[i + 1] > 1)
                    cnt += 2;
                else
                    cnt += 2;
            }
            cout << cnt << endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i = i + 2)
            {
                if (arr[i] == 1 && arr[i + 1] == 1)
                    cnt += 1;
                else if (arr[i] > 1 && arr[i + 1] > 1)
                    cnt += 2;
                else
                    cnt += 2;
            }
           
            cout << cnt+1 << endl;
        }
    }
    return 0;
}
