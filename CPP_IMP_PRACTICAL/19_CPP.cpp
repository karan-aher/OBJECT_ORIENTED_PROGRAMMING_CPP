/*
WAP to implement default constructor that initializes num1 and num2 as 10 and 20
and prints the values of num1 and num2.
*/
#include<iostream.h>
#include<conio.h>
class Item
{
 private:
 int num1,num2;
 public:
 Item()
 {
 num1=10;
 num2=20;
 }
 void display()
 {
 cout<<"\nValue of num1="<<num1;
 cout<<"\nValue of num2="<<num2;
 }
};
void main()
{
 Item i1;
 clrscr();
 i1.display();
 getch();
} 