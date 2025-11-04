#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<char> v;
    for (char c : s)
    {
        if (c == '<')
        {
            if (!v.empty())
                v.pop_back();
        }
        else
            v.push_back(c);
    }
    for (char c : v)
        cout << c;
    cout << endl;
    return 0;
}
