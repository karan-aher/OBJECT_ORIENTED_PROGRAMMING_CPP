#include<iostream.h>
#include<conio.h>
class Master
{
 protected:
 char name[10];
 int code;
 public:
 void get_master_info()
 {
 cout<<"\nEnter Master Name:";
 cin>>name;
 cout<<"\nEnter Master Code:";
 cin>>code;
 }
 void disp_master_info()
 {
 cout<<"\nMaster Name:"<<name;
 cout<<"\nMaster Code:"<<code;
 }
};
class Account:virtual public Master
{
 protected:
 int basic_pay,TA,HRA;
 public:
 void get_account_info()
 {
 cout<<"\nEnter Basic Pay:";
 cin>>basic_pay;
 cout<<"\nEnter TA:";
 cin>>TA;
 cout<<"\nEnter HRA:";
 cin>>HRA;
 }
 void disp_account_info()
 {
 cout<<"\nBasic Pay:"<<basic_pay;
 cout<<"\nTA:"<<TA;
 cout<<"\nHRA:"<<HRA;
 }
};
class Admin:virtual public Master
{
 protected:
 int experience;
 public:
 void get_admin_info()
 {
 cout<<"\nNo of years of experience:";
 cin>>experience;
 }
 void disp_admin_info()
 {
 cout<<"\nNo of Years of experience:"<<experience;
 }
};
class Employee:public Account,public Admin
{
 protected:
 int gross_salary;
 public:
 void get_employee_info()
 {
 gross_salary=basic_pay+TA+HRA;
 }
 void disp_employee_info()
 {
 cout<<"\nGross Salary:"<<gross_salary;
 }
};
void main()
{
 Employee e1;
 clrscr();
 e1.get_master_info();
 e1.get_admin_info();
 e1.get_account_info();
 e1.get_employee_info();
 e1.disp_master_info();
 e1.disp_account_info();
 e1.disp_admin_info();
 e1.disp_employee_info();
 getch();
} 