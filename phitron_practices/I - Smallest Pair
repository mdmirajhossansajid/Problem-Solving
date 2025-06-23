#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {
        int n;
        cin >> n;
        int a[n];
        int min_sum = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++) 
            {
                int sum = a[i] + a[j] + (j - i);
                min_sum = min(min_sum, sum); 
            }
        }

        cout << min_sum << endl; 
    }

    return 0;
}
