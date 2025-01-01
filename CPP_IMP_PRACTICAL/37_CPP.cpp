/*Write a C++ Program to interchange the values of two int , float and
char using function overloading.*/
#include<iostream.h>
#include<conio.h>
class Sample
{
 private:
 int a,b;
 float p,q;
 char m,n;
 public:
 void getdata(int x,int y)
 {
 int temp;
 a=x;
 b=y;
 cout<<"\n***Before Swapping(int)***";
 cout<<"\na="<<a<<"\tb="<<b;
 temp=a;
 a=b;
 b=temp;
 cout<<"\n***After Swapping(int)***";
 cout<<"\na="<<a<<"\tb="<<b;
 }
 void getdata(float x,float y)
 {
 float temp;
 p=x;
 q=y;
 cout<<"\n***Before Swapping(float)***";
 cout<<"\np="<<p<<"\tq="<<q;
 temp=p;
 p=q;
 q=temp;
 cout<<"\n***After Swapping(float)***";
 cout<<"\np="<<p<<"\tq="<<q;
 }
 void getdata(char x,char y)
 {
 char temp;
 m=x;
 n=y;
 cout<<"\n***Before Swapping(char)***";
 cout<<"\nm="<<m<<"\tn="<<n;
 temp=m;
 m=n;
 n=temp;
 cout<<"\n***After Swapping(char)***";
 cout<<"\nm="<<m<<"\tn="<<n;
 }
};
void main()
{
 Sample s1;
 int a=10,b=5;
 float c=10.10,d=20.20;
 clrscr();
 s1.getdata(a,b);
 s1.getdata(c,d);
 s1.getdata('V','J');
 getch();
} 