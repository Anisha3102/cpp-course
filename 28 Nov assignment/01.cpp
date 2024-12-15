//01 Define a structure Employee with fields: id, name, and salary. Write a C++ program that stores the details of 5 employees in an array of structures and prints the employee details with the highest salary.


#include<bits/stdc++.h>
using namespace std;
struct Employee
{
    int id;
    string name;
    double salary;
};
int main()
{
    // vector<Employee>emp;
    Employee emp[5]={
        {1,"aditya",50000},
        {2,"uma",120000},
        {3,"devesh",120000},
        {4,"mohit",12000},
        {5,"sunil",100}
    };
    vector<string>name;
    int maxSal = 0;
    for(int i=0;i<5;i++)
    {
        if(emp[i].salary>=maxSal)
        {
            maxSal = emp[i].salary;
        }
    }
    for(int i=0;i<5;i++)
    {
        if(emp[i].salary == maxSal)
        {
            name.push_back(emp[i].name);
        }
    }
   
    for(auto it:name)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    cout<<maxSal;
}


