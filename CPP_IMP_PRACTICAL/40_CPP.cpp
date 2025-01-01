/*
Overload the unary operator –(minus) using friend function.
returntype operator OP(Parameter list)
{
 //body
}
*/
#include<iostream.h>
#include<conio.h>
class Sample
{
 private:
 int x1,y1,z1;
 public:
 void getdata(int m,int n,int p)
 {
 x1=m;
 y1=n;
 z1=p;
 }
 void display()
 {
 cout<<"\nx1="<<x1<<"\ty1="<<y1<<"\tz1="<<z1;
 }
 friend void operator -(Sample &m)
 {
 m.x1=-m.x1;
 m.y1=-m.y1;
 m.z1=-m.z1;
 }
};
void main()
{
 Sample s1;
 clrscr();
 s1.getdata(10,-20,30);
 s1.display();
 -s1;
 s1.display();
 getch();
} 