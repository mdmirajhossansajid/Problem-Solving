https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mn = *min_element(a.begin(), a.end());

    int freq = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == mn) freq++;
    }

    if(freq % 2 == 1)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;

    return 0;
}
