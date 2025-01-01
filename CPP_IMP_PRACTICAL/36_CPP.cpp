/*Write a program which will implement pointer to derived class concept
(virtual function)*/
#include<iostream.h>
#include<conio.h>
class Base
{
 public:
 virtual void display()
 {
 cout<<"\ndisplay method of base class";
 }
};
class Derived:public Base
{
 public:
 void display()
 {
 cout<<"\ndisplay method of derived class";
 }
};
void main()
{
 Base b1,*bptr;
 Derived d1;
 clrscr();
 cout<<"\n***Pointer bptr points to base class***";
 bptr=&b1;
 bptr->display();
 cout<<"\n***Pointer bptr points to derived class***";
 bptr=&d1;
 bptr->display();
 getch();
} 