https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-07/challenges/printing-x

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == i && i + j == n + 1)
                cout << "X";
            else if (j == i)
                cout << "\\";
            else if (i + j == n + 1)
                cout << "/";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
