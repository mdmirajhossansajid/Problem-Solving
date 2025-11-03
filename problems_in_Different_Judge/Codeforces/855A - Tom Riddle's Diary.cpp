#include<bits/stdc++.h>
using namespace std;
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    map<string,bool>mp;
    while(t--)
    {
        string s;cin>>s;
        if(mp[s]==false)
           { cout<<"NO"<<endl;
            mp[s]=true;}
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
