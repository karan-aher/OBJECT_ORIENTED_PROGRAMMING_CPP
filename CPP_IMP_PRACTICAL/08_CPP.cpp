/*Write a C++ program to access the global variable using
scope resolution operator*/
#include<iostream.h>
#include<conio.h>
int a=10; //global variable
void main()
{
 int a=20; //local variable
 clrscr();
 cout<<"\nLocal Variable a="<<a;
 cout<<"\nGlobal Variable a="<<::a;
 getch();
} 