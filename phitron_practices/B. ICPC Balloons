https://codeforces.com/contest/1703/problem/B
---------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int freq[26]={0};
        int ballons=0;
        for(char c:s)
        {
            int idx=c-'A';
            if(freq[idx]==0)
            {
                ballons+=2;
                freq[idx]=1;
            }
            else
            ballons+=1;

        }
        cout<<ballons<<endl;
    }
    return 0;
}
