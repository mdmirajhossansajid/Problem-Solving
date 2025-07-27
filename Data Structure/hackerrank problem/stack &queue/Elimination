https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-07/challenges/elimination-2-2
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
        for(char c:s)
        {
            if(st.empty())
            {
                st.push(c);
            }
            else if(st.top()=='0' && c=='1')
            {
                st.pop();
            }
            else
                st.push(c);
          
            }
            if(st.empty()) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;

    }
    return 0;
}
