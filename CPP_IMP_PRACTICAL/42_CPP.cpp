/*
Overload the Binary operator + using friend function.
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
 int a,b;
 public:
 void getdata(int m,int n)
 {
 a=m;
 b=n;
 }
 void display()
 {
 cout<<"\na="<<a<<"\tb="<<b;
 }
 friend Sample operator +(Sample m,Sample n)
 {
 Sample temp;
 temp.a=m.a+n.a;
 temp.b=m.b+n.b;
 return(temp);
 }
};
void main()
{
 Sample s1,s2,s3;
 clrscr();
 s1.getdata(10,5);
 s2.getdata(20,30);
 s3=s1+s2;
 cout<<"\nObject s1:";
 s1.display();
 cout<<"\nObject s2:";
 s2.display();
 cout<<"\nObject s3:";
 s3.display();
 getch();
} 