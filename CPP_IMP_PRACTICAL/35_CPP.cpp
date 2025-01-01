//Write a program which show the use of this pointer.
#include<iostream.h>
#include<conio.h>
class Addition
{
 private:
 int a,b,c;
 public:
 void getdata()
 {
 this->a=10;
 this->b=5;
 }
 void putdata()
 {
 this->c=this->a+this->b;
 cout<<"\nAddition="<<this->c;
 }
};
void main()
{
 Addition a1;
 clrscr();
 a1.getdata();
 a1.putdata();
 getch();
} 