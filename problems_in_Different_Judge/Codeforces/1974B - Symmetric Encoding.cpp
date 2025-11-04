#include<bits/stdc++.h>
using namespace std;
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        set<char>ss(s.begin(),s.end());
        vector<char>v(ss.begin(),ss.end());
        map<char,char>mp;
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]=v[v.size()-1-i];
        }
        for(char c:s)
        {
            cout<<mp[c];
        }
        cout<<endl;
    }
    return 0;
}
