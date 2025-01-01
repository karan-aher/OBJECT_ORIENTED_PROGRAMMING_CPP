/*Write a C++ program to calculate the area and perimeter of rectangles using concept of
inheritance.
Area of Rectangle=Length*breadth
Perimeter=2*(length+breadth)*/
#include<iostream.h>
#include<conio.h>
class Area
{
 protected:
 int x,y;
 public:
 void calculate_area(int m,int n)
 {
 x=m;
 y=n;
 cout<<"\nArea of Rectangle:"<<(x*y);
 }
};
class Perimeter
{
 protected:
 int x,y;
 public:
 void calculate_perimeter(int m,int n)
 {
 x=m;
 y=n;
 cout<<"\nPerimeter of Rectangle:"<<(2*(x+y));
 }
};
class Rectangle:public Area,public Perimeter
{
 protected:
 int length,breadth;
 public:
 void getdata()
 {
 cout<<"\nEnter length of Rectangle:";
 cin>>length;
 cout<<"\nEnter breadth of Rectangle:";
 cin>>breadth;
 }
 void display()
 {
 calculate_area(length,breadth);
 calculate_perimeter(length,breadth);
 }
};
void main()
{
 Rectangle r1;
 clrscr();
 r1.getdata();
 r1.display();
 getch();
} 