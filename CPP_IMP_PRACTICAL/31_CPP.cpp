//Write a program which show the use of constructor in derived class.
#include<iostream.h>
#include<conio.h>
class A
{
 protected:
 int a;
 public:
 A(int x)
 {
 a=x;
 }
 void disp_A()
 {
 cout<<"\nValue of a="<<a;
 }
};
class B:public A
{
 protected:
 int b;
 public:
 B(int m,int n):A(m)
 {
 b=n;
 }
 void disp_B()
 {
 cout<<"\nValue of b="<<b;
 }
};
void main()
{
 B obj(120,240);
 clrscr();
 obj.disp_A();
 obj.disp_B();
 getch();
} 