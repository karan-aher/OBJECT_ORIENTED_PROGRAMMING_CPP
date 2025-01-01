/*Write a program to calculate square of number in which define class and define member function
inside the class as per requirement. */
#include<iostream.h>
#include<conio.h>
class Square
{
 private:
 int no;
 public:
 void getdata()
 {
 cout<<"\nEnter any number:";
 cin>>no;
 }
 void putdata()
 {
 cout<<"\nSquare of No="<<no*no;
 }
};
void main()
{
 Square s1;
 clrscr();
 s1.getdata();
 s1.putdata();
 getch();
}