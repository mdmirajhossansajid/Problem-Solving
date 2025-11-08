#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int customer = 1;
    set<pair<int, int>> s;       
    multiset<pair<int, int>> ml; 
    vector<int> ans;

    while (t--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int money;
            cin >> money;
            s.insert({customer, money});
            ml.insert({money, -customer});
            customer++;
        }
        else if (type == 2)
        {
            auto it = s.begin();
            int id = it->first;
            int money = it->second;
            ans.push_back(id);

            s.erase(it);
            ml.erase(ml.find({money, -id}));
        }
        else
        {
            auto it = prev(ml.end());
            int money = it->first;
            int id = -it->second;
            ans.push_back(id);

            ml.erase(it);
            s.erase(s.find({id, money}));
        }
    }

    for (int val : ans)
        cout << val << " ";
    cout << "\n";

    return 0;
}
