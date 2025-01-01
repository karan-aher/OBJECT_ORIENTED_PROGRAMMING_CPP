/*
Write a C++ program to declare a class "staff' having data members name,basic salary,
DA,HRA and calculate gross salary.Accept and display data for one staff.
I. DA=74.5% of basic
II. HRA= 30% of basic.
III. Gross_salary=basic+HRA+DA
*/
#include<iostream.h>
#include<conio.h>
class Staff
{
 private:
 char name[10];
 float basic_salary,DA,HRA,gross_salary;
 public:
 void get_staff_info()
 {
 cout<<"\nEnter staff name:";
 cin>>name;
 cout<<"\nEnter Basic Salary:";
 cin>>basic_salary;
 DA=(basic_salary*74.5)/100;
 HRA=(basic_salary*30)/100;
 gross_salary=(basic_salary+DA+HRA);
 }
 void disp_staff_info()

 {
 cout<<"\nStaff Name:"<<name;
 cout<<"\nBasic Salary:"<<basic_salary;
 cout<<"\nDA:"<<DA;
 cout<<"\nHRA:"<<HRA;
 cout<<"\nGross Salary:"<<gross_salary;
 }
};
void main()
{
 Staff s1;
 clrscr();
 s1.get_staff_info();
 s1.disp_staff_info();
 getch();
} 