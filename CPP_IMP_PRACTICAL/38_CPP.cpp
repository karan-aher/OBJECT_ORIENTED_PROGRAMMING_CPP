/*Write a C++ Program that find the sum of two int and double number
 using function overloading.*/
#include<iostream.h>
#include<conio.h>
class Sample
{
 private:
 int a,b;
 double p,q;
 public:
 void getdata(int x,int y)
 {
 a=x;
 b=y;
 cout<<"\nSum of two int nos="<<(a+b);
 }
 void getdata(double x,double y)
 {
 p=x;
 q=y;
 cout<<"\nSum of two double nos="<<(p+q);
 }
};
void main()
{
 Sample s1;
 clrscr();
 s1.getdata(10,5);
 s1.getdata(10.10,20.20);
 getch();
}