Prefix Suffix Approach ---------------------------------- time complexity ----O(n)
                         <<<OPTIMAL SOLUATION>>> 

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
     vector<int>prefixsum(n);
     prefixsum[0]=a[0];
    for(int i=1;i<n;i++)
    {
      prefixsum[i]=prefixsum[i-1]+a[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //   cout<<prefixsum[i]<<" ";
    // }
    vector<int>suffixsum(n);
    suffixsum[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
      suffixsum[i]=suffixsum[i+1]+a[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //   cout<<suffixsum[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<n;i++)
    {
      if(prefixsum[i]==suffixsum[i])
      {
        cout<<i<<" ";
        break;
      }
    }
    return 0;
}
