Question: Create three static objects with the help of the constructor of the following class.
Student
{
	name;
	roll;
	section;
	math_marks;
	cls;
}
Then compare those 3 objects and print who got the highest math_marks and print his/her name.
-----------------------------------------------------------------------------ANSWER--------------------------------------------------------------------------------------------
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
    Student(string n,int r,char s,int mm,int c){
        name=n;
        roll=r;
        section=s;
        math_marks=mm;
        cls=c;
    }
    
};
int main()
{
    Student s1("Rahim",1,'A',55,10);
    Student s2("Karim",4,'A',85,10);
    Student s3("Sakib",9,'A',59,10);
   Student top;

if (s2.math_marks > s1.math_marks && s2.math_marks > s3.math_marks)
    top = s2;
else if (s3.math_marks > s1.math_marks && s3.math_marks > s2.math_marks)
    top = s3;
else
    top = s1;
 cout << "Topper: " << top.name << endl;
    
    return 0;
}
************************************************************************************************************************************************

 Student heighest=s1;
    if(s2.math_marks>heighest.math_marks)
    {
        heighest=s2;
    }
     if(s3.math_marks>heighest.math_marks)
    {
        heighest=s3;
    }
    cout << "Top student: " << heighest.name << endl;



-----------------------------using ternary operatot--------------------------------

 Student top = (s1.math_marks > s2.math_marks) ? 
                    ((s1.math_marks > s3.math_marks) ? s1 : s3) : 
                    ((s2.math_marks > s3.math_marks) ? s2 : s3);

    cout << top.name << endl;
