//Write a program which show the use of constructor in derived class.
#include<iostream.h>
#include<conio.h>
class A
{
 protected:
 int a;
 public:
 A()
 {
 a=100;
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
 B():A()
 {
 b=200;
 }
 void disp_B()
 {
 cout<<"\nValue of b="<<b;
 }
};
void main()
{
 B obj;
 clrscr();
 obj.disp_A();
 obj.disp_B();
 getch();
}
Practical’s/Practi