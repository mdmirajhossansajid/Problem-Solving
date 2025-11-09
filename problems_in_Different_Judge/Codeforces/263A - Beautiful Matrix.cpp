#include <bits/stdc++.h>
using namespace std;

int main() {
    int r = 0, c = 0;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int x;
            cin >> x;
            if (x == 1) {
                r = i;
                c = j;
            }
        }
    }
    cout << abs(r - 3) + abs(c - 3) << "\n";
    return 0;
}
