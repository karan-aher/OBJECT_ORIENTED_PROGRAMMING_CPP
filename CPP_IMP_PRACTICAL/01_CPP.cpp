/*Write a C++ code to evaluate following expression using input output function:
 y= 5*x-5 where value of x is taken from user. Find the value of y.*/
 #include<iostream.h>
 #include<conio.h>
 void main()
 {
 int x,y;
 clrscr();
 cout<<"\nEnter value of x:";
 cin>>x;
 y=((5*x)-5);
 cout<<"\nResult of Expression Y="<<y;
 getch();
 }