//Approach 1
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int W, P, K;
        cin >> W >> P >> K;
        int wood = min(W, K);
        int ans = K + wood;
        cout << ans << '\n';
    }
    return 0;
}
//Approach 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int ans = 0;
    while (t--)
    {
        int w, p, k;
        cin >> w >> p >> k;
        if (k > w)
        {

            k = k - w;
            ans = (w * 2) + k;
        }
        else if (k <= w)
            ans = k * 2;
        cout << ans << endl;
    }
    return 0;
}
