#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;cin>>s1>>s2;
    int cnt=0;
    int n=min(s1.size(),s2.size());
    for(int i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])
            cnt++;

    }
    cout<<cnt<<endl;

    return 0;
}
