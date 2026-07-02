#include<bits/stdc++.h>
using namespace std;
void sajid(int a[],int n)
{
    int b[n]={0};
    int pos=0;
     for(int i=0;i<n;i++)
    {
       if(a[i]!=0)
       {
        b[pos]=a[i];
        pos++;
       }
        
    }
     for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
        
    }

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    sajid(a,n);
    return 0;
}
