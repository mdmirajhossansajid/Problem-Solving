using Brute Force Approach-----------------------------time complexity O(n^2)
---------------------------(NOT OPTIMAL SOLUATION)
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
    for(int i=0;i<n;i++)
    {
      int leftsum=0;
      for(int j=0;j<i;j++)
      {
        leftsum+=a[j];
      }
      int rightsum=0;
      for(int j=i+1;j<n;j++)
      {
        rightsum+=a[j];
      }
      if(leftsum==rightsum)
      {
        cout<<i<<" ";
      }
    }
    return 0;
}
