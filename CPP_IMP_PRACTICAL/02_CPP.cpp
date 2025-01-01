/*Write a program to print “hi” msg if entered value is more than 10
otherwise print “bye” msgon output screen. (Use of Relational operator)*/
 #include<iostream.h>
 #include<conio.h>
 void main()
 {
 int x;
 clrscr();
 cout<<"\nEnter value of x:";
 cin>>x;
 if(x>10)
 {
 cout<<"\nhi";
 }
 else
 {
 cout<<"\nbye";
 }
 getch();
 } 