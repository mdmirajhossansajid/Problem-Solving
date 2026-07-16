#include<bits/stdc++.h>
using namespace std;
int flag = 1;
int main()
{   string s;cin>>s;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='s' && s[i+1]=='s')
           flag+=1;
    }
    if(flag==1)
        cout<<"no hiss";
    else
        cout<<"hiss";
    
    return 0;
}
