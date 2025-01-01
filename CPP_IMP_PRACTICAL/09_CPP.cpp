/*Find the area of the rectangle by casting double data into float
and int type.*/
#include<iostream.h>
#include<conio.h>
void main()
{
 int length,breadth;
 double area;
 clrscr();
 cout<<"\nEnter length of rectangle:";
 cin>>length;
 cout<<"\nEnter breadth of rectangle:";
 cin>>breadth;
 area=(double)length*breadth;
 cout<<"\nArea of Rectangle="<<area;
 getch();
} 