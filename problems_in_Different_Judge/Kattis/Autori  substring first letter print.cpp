#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    stringstream ss(s);
    string word;
    string result;
    while(getline(ss,word,'-'))
    {
        result+=word[0];
    }
    cout<<result<<endl;
    return 0;
}
