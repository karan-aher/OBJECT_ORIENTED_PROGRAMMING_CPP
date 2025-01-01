/*
Overload the Binary operator + using member function.
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
 Sample operator +(Sample m)
 {
 Sample temp;
 temp.a=a+m.a;
 temp.b=b+m.b;
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