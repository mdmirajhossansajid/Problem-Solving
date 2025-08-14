https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-07/challenges/get-current-max

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {

        if (a.marks< b.marks)
            return true;
        if (a.marks> b.marks)
            return false;
        if (a.roll> b.roll)
            return true;
        return false;
    }
};

int main()
{
    int n;
    cin>>n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin>>name>>roll>>marks;
        pq.push(Student(name, roll, marks));
    }
    int q;
    cin>>q;
    while(q--)
    {
        int t;
        cin>>t;
        if (t== 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            if (!pq.empty())
            {
                Student top = pq.top();
                cout<<top.name<<" "<<top.roll<<" "<<top.marks<<endl;
            }
            else
            {
                cout<<"Empty\n";
            }
        }
        else if (t == 1)
        {
            if (!pq.empty())
            {
                Student top = pq.top();
                cout<<top.name<< " "<<top.roll <<" "<<top.marks<<endl;
            }
            else
            {
                cout << "Empty\n";
            }
        }
        else if (t == 2)
        {
            if (!pq.empty())
                pq.pop();
            if (!pq.empty())
            {
                Student top = pq.top();
                cout<<top.name<<" "<<top.roll<<" "<<top.marks <<endl;
            }
            else
            {
                cout << "Empty\n";
            }
        }
    }

    return 0;
}
