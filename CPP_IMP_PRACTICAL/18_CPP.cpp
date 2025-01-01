/*
Write a C++ program to declare class ‘Account’ having data members as Account_No and
Balance. Accept this data for 10 accounts and display data of Accounts having balance
greater than 10000.
*/
#include<iostream.h>
#include<conio.h>
class Account
{
 private:
 int account_no,balance;
 public:
 void get_account_info()
 {
 cout<<"\nEnter Account Number:";
 cin>>account_no;
 cout<<"\nEnter Balance Amount:";
 cin>>balance;
 }
 void disp_account_info()
 {
 if(balance>10000)
 {
 cout<<"\n"<<account_no<<"\t"<<balance;
 }
 }
};
void main()
{
 Account a[10];
 int i;
 clrscr();
 cout<<"\nEnter 10 account details:";
 for(i=0;i<10;i++)
 {
 a[i].get_account_info();
 }
 cout<<"\nACCNO\tBALANCE";
 cout<<"\n=====================";
 for(i=0;i<10;i++)
 {
 a[i].disp_account_info();
 }
 getch();
} 
