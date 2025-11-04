#include<bits/stdc++.h>
using namespace std;
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    string s;cin>>s;
    map<pair<char,char>,int>mp;
    for(int i=0;i<n-1;i++)
    {
        mp[{s[i],s[i+1]}]++;
    }
    int mx=0;
    pair<char, char>ans;
    for(auto it:mp)
    {
        if(it.second>mx)
        {
            mx=it.second;
            ans=it.first;
        }
    }
    cout<<ans.first<<ans.second<<endl;

        return 0;
}
