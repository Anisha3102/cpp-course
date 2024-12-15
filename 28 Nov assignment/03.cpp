
//03 Given a structure Student with fields: id, name, and marks, write a program that uses a
//map to store student information with the student ID as the key. The program should print 
//the name of the student with the highest marks.

#include<bits/stdc++.h>
using namespace std;
struct Student
{
    int id;
    string name;
    double marks;
};
int main()
{
    map<int,Student>students = {
        {1,{1,"Uma",5}},
        {2,{2,"KrishnaKant",2500}},
        {3,{3,"Rohit",1000}}
    };
    double topstudent = 0;
    string student;
    
    for(auto it:students)
    {
        if(it.second.marks>topstudent)
        {
            student = it.second.name;
            topstudent = it.second.marks;
        }
    }
    cout<<student;
}

