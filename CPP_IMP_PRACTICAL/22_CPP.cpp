/*
Write a C++ program to define a class "Employee" having data members emp_no,
emp_name and emp_designation. Derive a class "Salary" from "Employee" having data
members basic, hra, da, gross_sal. Accept and display data for one employee.
*/
#include<iostream.h>
#include<conio.h>
class Employee
{
 protected:
 int emp_no;
 char emp_name[10],emp_designation[10];
 public:
 void get_employee_info()
 {
 cout<<"\nEnter employee no:";
 cin>>emp_no;
 cout<<"\nEnter employee name:";
 cin>>emp_name;
 cout<<"\nEnter employee designation:";
 cin>>emp_designation;
 }
 void disp_employee_info()
 {
 cout<<"\nEmployee No:"<<emp_no;
 cout<<"\nEmployee Name:"<<emp_name;
 cout<<"\nEmployee designation:"<<emp_designation;
 }
};
class Salary:public Employee
{
 protected:
 int basic_sal,HRA,DA,gross_sal;
 public:
 void get_salary_info()
 {
 cout<<"\nEnter basic salary:";
 cin>>basic_sal;
 cout<<"\nEnter HRA:";
 cin>>HRA;
 cout<<"\nEnter DA:";
 cin>>DA;
 gross_sal=basic_sal+DA+HRA;
 }
 void disp_salary_info()
 {
 cout<<"\nBasic Salary:"<<basic_sal;
 cout<<"\nHRA:"<<HRA;
 cout<<"\nDA:"<<DA;
 cout<<"\nGross Salary:"<<gross_sal;
 }
};
void main()
{
 Salary s1;
 clrscr();
 s1.get_employee_info();
 s1.get_salary_info();
 s1.disp_employee_info();
 s1.disp_salary_info();
 getch();
} 