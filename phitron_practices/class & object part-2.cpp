Question::
"If two students have equal marks, then will be printed in order of their roll numbers."

#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
    
};
int main()
{
    int n;
    cin>>n;
    Student topper;
    for(int i=1;i<=n;i++)
    {
        Student temp;
        cin>>temp.name>>temp.roll>>temp.section>>temp.math_marks>>temp.cls;
        if(i==1)
        {
            topper=temp;
        }
        else
        {
            if(temp.math_marks>topper.math_marks)
            {
                topper=temp;
            }
            else if(temp.math_marks==topper.math_marks)
            {
                if(temp.roll<topper.roll)
                {
                    topper=temp;
                }
            }
        }

    }
    cout<<topper.roll<<" "<<topper.name<<" "<<topper.section<<" "<<topper.math_marks<<" "<<topper.cls<<endl;
    

}
