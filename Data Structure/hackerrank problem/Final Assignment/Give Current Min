https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-07/challenges/give-max-min

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    multiset<long long> ms;
    for (int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        ms.insert(x);
    }
    int q;
    cin>>q;
    while(q--)
    {   int t;
        cin>>t;
        if (t==0)
        {
            long long x;
            cin>>x;
            ms.insert(x);
        }
        else if (t==2)
        {
            if (!ms.empty())
                ms.erase(ms.begin());
        }
        if (!ms.empty())
            cout<<*ms.begin()<<endl;
        else
            cout<<"Empty"<<endl;
    }
    return 0;
}
