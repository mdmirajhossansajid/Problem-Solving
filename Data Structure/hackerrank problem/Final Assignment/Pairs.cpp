https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-07/challenges/pairs-17
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> l, pair<string, int> r)
{
    if (l.first<r.first)
        return true;
    if (l.first>r.first)
        return false;
    return l.second>r.second;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<string, int>> v;
    while(n--)
    {
        string name;
        int mark;
        cin>>name>>mark;
        v.push_back({name, mark});
    }
    sort(v.begin(), v.end(), cmp);

    for (int i=0; i<v.size();i++)
    {
        cout<<v[i].first<< " "<<v[i].second<<endl;
    }

    return 0;
}
