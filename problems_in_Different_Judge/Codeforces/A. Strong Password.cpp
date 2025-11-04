#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int i;
        for (i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
                break;
        }
        if (s[i - 1] == 'a')
            s.insert(s.begin() + i, 'b');
        else
            s.insert(s.begin() + i, 'a');
        cout << s << endl;
    }
    return 0;
}
