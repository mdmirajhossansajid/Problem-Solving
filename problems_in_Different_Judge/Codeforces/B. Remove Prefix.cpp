#include<bits/stdc++.h>
using namespace std;
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        set<int>s;
        for(int i=n-1;i>=0;i--)
        {
            if(s.count(v[i]))
                break;
            else
                s.insert(v[i]);
        }
        cout<<n-s.size()<<endl;
    }
    return 0;
}
