#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {   int sum=1;
        int a;cin>>a;
       if(a<5)
       {
           for (int i = 1; i <= a; i++)
           {
               sum *= i;
           }
           cout<<sum%10<<endl;
       }
       else
         cout<<0<<endl;    
    }
    return 0;
}
