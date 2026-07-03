#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string>website;
    string name;
    while(cin>>name && name!="end")
    {
        website.push_back(name);
    }
    int q;cin>>q;
    auto current=website.begin();
    while(q--)
    {   
        string cmd;
        cin>>cmd;
        if(cmd=="visit")
        {
            string website_name;
            cin>>website_name;
            auto it=find(website.begin(),website.end(),website_name);
            if(it!=website.end())
            {
                cout<<*it<<endl;
                current=it;
                
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(cmd=="next")
        {
            if(next(current)!=website.end())
            {
                current=next(current);
                cout<<*current<<endl;
            }
            else
            cout<<"Not Available"<<endl;
        }
         else if(cmd=="prev")
        {
            if(current==website.begin())
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                current=prev(current);
                cout<<*current<<endl;
            }
        }
    }
    return 0;
}
