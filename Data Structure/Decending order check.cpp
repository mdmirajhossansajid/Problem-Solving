#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    vector<int>copy_v(a);
   sort(copy_v.begin(),copy_v.end(),greater<int>());
   int issorted=1;
   for(int i=0;i<n;i++)
   {
    if(copy_v[i]!=a[i])
    {
      issorted=0;
      break;
    }
   }
   if(issorted==1)
   {
    cout<<"Decending order sort"<<endl;
   }
   else
   {
    cout<<"Not Decending Sorted"<<endl;
   }
    return 0;
}
