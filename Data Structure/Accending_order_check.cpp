#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Create a copy of the array
    vector<int> copy_v(a);

    // Sort the copy in ascending order
    sort(copy_v.begin(), copy_v.end()); // ascending sort

    // Compare original and sorted copy
    int flag = 1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != copy_v[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        cout << "Ascending order sort" << endl;
    }
    else
    {
        cout << "Not Ascending Sorted" << endl;
    }

    return 0;
}
