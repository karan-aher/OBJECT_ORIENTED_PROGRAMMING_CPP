/*
Write a C++ program to exchange the values of two variables using friend function
*/
#include<iostream.h>
#include<conio.h>
class Sample
{
 private:
 int a,b;
 public:
 void getdata()
 {
 cout<<"\nEnter two numbers:";
 cin>>a>>b;
 }
 void putdata()

 {
 cout<<"\na="<<a<<"\tb="<<b;
 }
 friend void swap(Sample &m)
 {
 int temp;
 temp=m.a;
 m.a=m.b;
 m.b=temp;
 }
};
void main()
{
 Sample s1;
 clrscr();
 s1.getdata();
 s1.putdata();
 swap(s1);
 s1.putdata();
 getch();
} 