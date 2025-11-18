#include<bits/stdc++.h>
using namespace std;
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,n;cin>>x>>n;
    set<int>light;
    multiset<int>distance;
    light.insert(0);
    light.insert(x);
    distance.insert(x);
    for(int i=1;i<=n;i++)
    {
        int p;cin>>p;
        auto it=light.upper_bound(p);
        int right=*it;
        it--;
        int left=*it;
        distance.erase(distance.find(right-left));
        distance.insert(right-p);
        distance.insert(p-left);
        light.insert(p);
        cout<<*distance.rbegin()<<" ";
       
    }
    cout << endl;

    return 0;
}
