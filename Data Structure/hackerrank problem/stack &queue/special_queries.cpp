https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-07/challenges/special-queries-1-1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    queue<string>q;
    
    while(t--)
    {   
        int cmd;
        cin>>cmd;
        if(cmd==0)
        {
            string name;
            cin>>name;
            q.push(name);
        }
        else if(cmd==1)
        {
            if(q.empty())
               {
                 cout<<"Invalid"<<endl;
               }
            else
            {
                cout<<q.front()<<endl;
                q.pop();  
            }
                  
        }
    }
    return 0;
}
