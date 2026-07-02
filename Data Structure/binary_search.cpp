#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int t;
    cin>>t;
    while(t--)
    {
        int q,l=0,r=n-1;
        cin>>q;
        int flag=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(a[mid]==q)
            {
                flag=1;
                break;
            }
            else if(a[mid]>q)r=mid-1;
            else
            l=mid+1;
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
        

    }
    
    return 0;
}
