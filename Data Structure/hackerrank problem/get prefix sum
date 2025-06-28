https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-07/challenges/get-prefix-sum

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int presum[n];
    presum[0]=a[0];
     for(int i=1;i<n;i++)
    {
        presum[i]=presum[i-1]+a[i];
    }
    reverse(presum,presum+n);
    for(int i=0;i<n;i++)
    {
        cout<<presum[i]<<" ";
    }

    return 0;
}
