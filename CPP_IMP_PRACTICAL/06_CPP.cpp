/*Write a program to display the massage “Welcome to the world
of C++” using manipulators.
*/
 #include<iostream.h>
 #include<iomanip.h>
 #include<conio.h>
 void main()
 {
 int x=12345;
 clrscr();
 cout<<endl<<"Welcome to the world of C++";
 cout<<endl<<setw(8)<<x; //output= 12345
 getch();
 } 
