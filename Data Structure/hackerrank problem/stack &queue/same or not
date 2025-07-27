https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-07/challenges/same-or-not-ii
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int x,y;
    cin>>n>>m;
    stack<int>st;
    queue<int>q;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        st.push(x);
    }
    for(int i=0;i<m;i++)
    {
        cin>>y;
        q.push(y);
    }
    bool same=true;
    if(n!=m)
        same=false;
    else
    {
         while(!st.empty() && !q.empty())
    {
        if(st.top()!=q.front())
    {
        same=false;
        break;
    }
    st.pop();
    q.pop();
    }
    }
    if(same) cout<<"YES";
    else cout<<"NO";
    return 0;

}
