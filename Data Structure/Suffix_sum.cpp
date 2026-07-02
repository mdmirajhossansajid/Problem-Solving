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
    vector<int>suffix_sum(n);
    suffix_sum[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
      suffix_sum[i]=suffix_sum[i+1]+a[i];
    }
     for(int i=0;i<n;i++)
    {
      cout<<suffix_sum[i]<<" ";
    }

    return 0;
}
