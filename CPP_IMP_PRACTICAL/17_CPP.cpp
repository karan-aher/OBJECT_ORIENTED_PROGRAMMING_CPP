/*
Write a Program to define a class having data members principal, duration and
rate of interest.Declare rate _of_ interest as static member variable .
calculate the simple interest and display it.
*/
#include<iostream.h>
#include<conio.h>
class BankLoan
{
 private:
 float principal,duration,SI;
 static float rate_of_interest;
 public:
 void get_loan_details()
 {
 cout<<"\nEnter principal amount:";
 cin>>principal;
 cout<<"\nEnter duration:";
 cin>>duration;
 }
 void disp_loan_details()
 {
 SI=(principal*duration*rate_of_interest)/100;
 cout<<"\n****LOAN DETAILS****";
 cout<<"\nPrincipal Amount:"<<principal;
 cout<<"\nDuration:"<<duration;
 cout<<"\nRate of interest:"<<rate_of_interest;
 cout<<"\nSimple interest:"<<SI;
 }
};
float BankLoan::rate_of_interest=8.35;
void main()
{
 BankLoan b1;
 clrscr();
 b1.get_loan_details();
 b1.disp_loan_details();
 getch();
} 