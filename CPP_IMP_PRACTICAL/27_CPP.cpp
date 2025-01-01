/*Write a C++ program to implement the following inheritance. Accept and display data for one
programmer and one manager.*/
#include<iostream.h>
#include<conio.h>
class Employee
{
 protected:
 int empid;
 public:
 void get_employee_info()
 {
 cout<<"\nEnter employee id:";
 cin>>empid;
 }
 void disp_employee_info()
 {
 cout<<"\nEmployee ID:"<<empid;
 }
};
class Programmer:public Employee
{
 protected:
 char skill[20];
 public:
 void get_programmer_info()
 {
 cout<<"\nEnter Skills of programmer:";
 cin>>skill;
 }
 void disp_programmer_info()
 {
 cout<<"\nSkills:"<<skill;
 }
};
class Manager:public Employee
{
 protected:
 char department[20];
 public:

 void get_manager_info()
 {
 cout<<"\nEnter department Name:";
 cin>>department;
 }
 void disp_manager_info()
 {
 cout<<"\nDepartment Name:"<<department;
 }
};
void main()
{
 Programmer p1;
 Manager m1;
 clrscr();
 cout<<"\n***Programmer Object***";
 p1.get_employee_info();
 p1.get_programmer_info();
 p1.disp_employee_info();
 p1.disp_programmer_info();
 cout<<"\n***Manager Object***";
 m1.get_employee_info();
 m1.get_manager_info();
 m1.disp_employee_info();
 m1.disp_manager_info();
 getch();
} 