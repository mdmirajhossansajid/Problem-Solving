#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;cin>>n;
    long long int a[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    long long int sum=(n*(n+1))/2;
    long long int total = 0;
    for (int i = 0; i < n-1; i++)
    {
        total+=a[i];
    }
    cout<<sum-total<<endl;
    return 0;
}
