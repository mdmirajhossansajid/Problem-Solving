#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        
        int n,a,b;
        cin>>n>>a>>b;
        int anss = INT_MAX;
        while(n--)
        {  
            int x,y;
            cin>>x>>y;
            int dis=abs(a-x)+abs(b-y);
            anss=min(anss,dis);
        }
        cout<<anss<<endl;
    }
    
    return 0;
}
