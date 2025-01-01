/*Write a C++ program to implement following Multilevel Inheritance*/

#include<iostream.h>
#include<conio.h>
class Person
{
 protected:
 char name[10],gender[10];
 int age;
 public:
 void get_person_info()
 {
 cout<<"\nEnter Person Name:";
 cin>>name;
 cout<<"\nEnter Person Gender:";
 cin>>gender;
 cout<<"\nEnter person age:";
 cin>>age;
 }
 void disp_person_info()
 {
 cout<<"\nPerson Name:"<<name;
 cout<<"\nPerson Gender:"<<gender;
 cout<<"\nPerson Age:"<<age;
 }
};
class Employee:public Person
{
 protected:
 int emp_id;
 char company[10];
 float salary;
 public:
 void get_employee_info()
 {
 cout<<"\nEnter Employee ID:";
 cin>>emp_id;
 cout<<"\nEnter Company Name:";
 cin>>company;
 cout<<"\nEnter Employee Salary:";
 cin>>salary;
 }
 void disp_employee_info()
 {
 cout<<"\nEmployee ID:"<<emp_id;
 cout<<"\nCompany Name:"<<company;
 cout<<"\nEmployee Salary:"<<salary;
 }
};
class Programmer:public Employee
{
 protected:
 int no_of_prog_lang_known;
 public:
 void get_programmer_info()
 {
 cout<<"\nNo of Programming Language Known?";
 cin>>no_of_prog_lang_known;
 }
 void disp_programmer_info()
 {
 cout<<"\nNo of Programming Language Known:"<<no_of_prog_lang_known;
 }
};
void main()
{
 Programmer p1;
 clrscr();
 p1.get_person_info();
 p1.get_employee_info();
 p1.get_programmer_info();
 p1.disp_person_info();
 p1.disp_employee_info();
 p1.disp_programmer_info();
 getch();
} 