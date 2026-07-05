https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-07/challenges/count-me-2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);
        stringstream ss(str);
        string word;
        map<string, int> mp;
        int count = 0;
        string max_find_word;
        while (ss>>word)
        {
            mp[word]++;
            if (mp[word]>count)
            {
                count=mp[word];
                max_find_word=word;
            }
        }
        cout<<max_find_word<<" "<<count<<endl;
    }
     return 0;
}
