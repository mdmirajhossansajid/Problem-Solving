https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-07/challenges/is-it-valid-1-1


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(st.top()=='0' && s[i]=='1')
            {
                st.pop();
            }
            else if(st.top()=='1' && s[i]=='0')
            {
                st.pop();
            }
            else
                st.push(s[i]);
        }
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
