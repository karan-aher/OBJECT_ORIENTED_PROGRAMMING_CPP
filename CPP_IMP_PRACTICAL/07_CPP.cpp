/*Write a program to create the memory using new operator and
free the created memory using delete operator.
*/
 #include<iostream.h>
 #include<iomanip.h>
 #include<conio.h>
 void main()
 {
 int *p=new int;
 clrscr();
 *p=100;
 cout<<"\nValue of *p="<<*p;
 delete p;
 getch();
 } 