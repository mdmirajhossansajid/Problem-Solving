---------------------------------------------Using insertion sort technique------------------------------------------------

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
       
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
 
    return 0;
}
-------------------------------------------------------use sort fun----------------------------------------------------
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

    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<" ";
    }

    return 0;
}
-------------------------------------------using dynamic memory ,sort and delete array ------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;
int n;

int *sort_fun()
{
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sort accending order
    sort(arr, arr + n);
    return arr;
}

int main()
{
    int *return_arr = sort_fun();
    for (int i = 0; i < n; i++)
    {
        cout << return_arr[i] << " ";
    }
    delete[] return_arr;
    return 0;
}
