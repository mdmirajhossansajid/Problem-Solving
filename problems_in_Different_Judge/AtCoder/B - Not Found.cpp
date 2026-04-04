#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int fre[26];
    memset(fre,-1,sizeof(fre));
    for(char c:s)
    {
        fre[c-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(fre[i]==-1)
       {     cout<<(char)(i+'a')<<endl;
        return 0;}
    }
    cout<<"None";
    return 0;
}
