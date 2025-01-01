/*Write a C++ Program which show the use of function outside the
class using scope resolution operator
Syntax:
 returntype classname::functionname(Parameter list)
 {
 //body of function
 }
 */
 #include<iostream.h>
 #include<conio.h>
 class Addition
 {
 private:
 int a,b,c;
 public:
 void getdata();
 void putdata();
 };
 void Addition::getdata()
 {
 a=10;
 b=5;
 }
 void Addition::putdata()
 {
 c=a+b;
 cout<<"\nAddition="<<c;
 }
 void main()
 {
 Addition a1;
 clrscr();
 a1.getdata();
 a1.putdata();
 getch();
 } 