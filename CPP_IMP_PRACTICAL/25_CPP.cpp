/*
Identify the following type of Inheritance shown.Write a definition of each class .Write suitable
member functions to accept and display data for each class.
*/
#include<iostream.h>
#include<conio.h>
class Employee
{
 protected:
 int emp_id;
 char name[10];
 public:
 void get_employee_info()
 {
 cout<<"\nEnter Employee ID:";
 cin>>emp_id;
 cout<<"\nEnter Employee Name:";
 cin>>name;
 }
 void disp_employee_info()
 {
 cout<<"\nEmployee ID:"<<emp_id;
 cout<<"\nEmployee Name:"<<name;
 }
};
class Emp_Union
{
 protected:
 int member_id;
 public:
 void get_EmpUnion_info()
 {
 cout<<"\nEnter Member id:";
 cin>>member_id;
 }
 void disp_EmpUnion_info()
 {
 cout<<"\nMember Id:"<<member_id;
 }
};
class Emp_Info:public Employee,public Emp_Union
{
 protected:
 int basic_salary;
 public:
 void get_salary_info()
 {
 cout<<"\nEnter basic salary:";
 cin>>basic_salary;
 }
 void disp_salary_info()
 {
 cout<<"\nBasic Salary:"<<basic_salary;
 }
};
void main()
{
 Emp_Info e1;
 clrscr();
 e1.get_employee_info();
 e1.get_EmpUnion_info();
 e1.get_salary_info();
 e1.disp_employee_info();
 e1.disp_EmpUnion_info();
 e1.disp_salary_info();
 getch();
} 