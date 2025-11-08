#include<bits/stdc++.h>
using namespace std;
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        map<int,set<int>>mp;
        for(int i=1;i<=n;i++)
        {
            int x;cin>>x;
            mp[x].insert(i);
        }
        for(int i=0;i<m;i++)
        {
            int  source,des;cin>>source>>des;
            if(mp.find(source)==mp.end() || mp.find(des)==mp.end())
            {
                cout<<"NO"<<endl;
            }
            else
            {
                auto source_station=*mp[source].begin();
                auto des_station=*mp[des].rbegin();
                if(des_station>source_station)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }

        }
       

    }
    return 0;
}
