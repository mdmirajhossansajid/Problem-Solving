#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, capacity;
    cout << "Enter number of objects: ";
    cin >> n;

    vector<int> weight(n + 1), profit(n + 1);

    cout << "Enter weight and profit of each object:\n";
    for (int i = 1; i <= n; i++) {
        cin >> weight[i] >> profit[i];
    }

    cout << "Enter capacity of knapsack: ";
    cin >> capacity;

    vector<vector<int>> k(n + 1, vector<int>(capacity + 1, 0));

   
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0) {
                k[i][w] = 0;
            } else if (weight[i] <= w) {
                k[i][w] = max(k[i - 1][w], k[i - 1][w - weight[i]] + profit[i]);
            } else {
                k[i][w] = k[i - 1][w];
            }
        }
    }

    cout << "\nMaximum profit: " << k[n][capacity] << endl;

    cout << "\nDP Table:\n";
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            cout << k[i][w] << "\t";
        }
        cout << endl;
    }

    return 0;
}

