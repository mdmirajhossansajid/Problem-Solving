#include<bits/stdc++.h>
using namespace std;
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        vector<pair<int, char>> upper, lower;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b')
            {
                if(!lower.empty())
                    lower.pop_back();

            }
            else if (s[i] == 'B')
            {
                if (!upper.empty())
                    upper.pop_back();
            }
            else if(isupper(s[i]))
                upper.push_back({i,s[i]});
            else if (islower(s[i]))
                lower.push_back({i, s[i]});
           
        }

        vector<pair<int, char>> merged;
        for (auto c : upper)
        {
            merged.push_back(c);
        }
        for (auto c : lower)
        {
            merged.push_back(c);
        }
        sort(merged.begin(), merged.end());
        for (auto c : merged)
        {
            cout << c.second;
        }
        cout<<endl;
    }
    
    return 0;
}
