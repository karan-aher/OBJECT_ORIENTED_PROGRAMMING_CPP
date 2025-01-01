/*
Write a C++ program to create a class "Number" having data members n1 and n2
and perform mathematical operations like addition, subtraction, multiplication
and division on two numbers using inline functions.
*/
#include<iostream.h>
#include<conio.h>
class Number
{
 private:
 int n1,n2;
 public:
 inline void get_numbers()
 {
 cout<<"\nEnter two numbers:";
 cin>>n1>>n2;
 }
 inline void Addition()
 {
 cout<<"\nAddition="<<n1+n2;
 }
 inline void Subtraction()
 {
 cout<<"\nSubtraction="<<n1-n2;
 }
 inline void Multiplication()
 {
 cout<<"\nMultiplication="<<n1*n2;
 }
 inline void Division()
 {
 cout<<"\nDivision="<<n1/n2;
 }
};
void main()
{
 Number N;
 clrscr();
 N.get_numbers();
 N.Addition();
 N.Subtraction();
 N.Multiplication();
 N.Division();
 getch();
} 