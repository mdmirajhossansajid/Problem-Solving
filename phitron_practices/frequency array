https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
D. Counting Elements


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    int fre[10005]={0};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
        fre[a[i]]=1;
    }
    int count=0;
     for(int i=0;i<n;i++)
     {
        if(fre[a[i]+1])
        {
            count++;
        }

     }
     cout<<count;

    return 0;
}
=================================================================
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
       
    }
    int count=0;
     for(int i=0;i<n;i++)
     {
        if(find(a.begin(),a.end(),a[i]+1)!=a.end())
        {
            count++;
        }
     }
     cout<<count;

    return 0;
}
