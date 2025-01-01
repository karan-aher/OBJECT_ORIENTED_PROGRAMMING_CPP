/*Write a program to print largest number among two number using
Conditional operator (?:)
Syntax: Condition?Expression1:Expression2;
If condition is true then expression1 is executed otherwise expression2 is executed.
*/
 #include<iostream.h>
 #include<conio.h>
 void main()
 {
 int a,b,c;
 clrscr();
 cout<<"\nEnter two numbers:";
 cin>>a>>b; //a=10 b=50
 c=a>b?a:b;
 cout<<"\nLargest number="<<c;
 getch();
 } 