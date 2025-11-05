//Approach 1
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int flag=0;
        bool eat=false;
        for(char c: s)
        {
            if(c=='1')
                eat=true;
           else if(!eat)
             flag++;
        }
        cout<<flag<<endl;
    }
    return 0;
}
//approach 2
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        string S; cin >> S;
        int safe = 0;
        bool wolfSeen = false;

        for (char c : S) {
            if (c == '1') wolfSeen = true;
            else if (!wolfSeen) safe++; 
        }

        cout << safe << "\n";
    }
    return 0;
}
