/*Write a program which show the use of implicit type casting to calculate the average of two
number*/
#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b;
 float avg;
 clrscr();
 cout<<"\nEnter two numbers:";
 cin>>a>>b;
 avg=(a+b)/2;
 cout<<"\nAverage of Two Number="<<avg;
 getch();
}