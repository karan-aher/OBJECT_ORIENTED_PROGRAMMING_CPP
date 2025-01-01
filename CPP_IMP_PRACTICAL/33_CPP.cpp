/*Write a C++ program to declare a class "Box" having data members height, width and breadth.
Accept this information for one object using pointer to that object . Display the area and volume of
that object.*/
 #include<iostream.h>
#include<conio.h>
class Box
{
 protected:
 int height,width,breadth;
 public:
 void get_box_info()
 {
 cout<<"\nEnter box height:";
 cin>>height;
 cout<<"\nEnter box width:";
 cin>>width;
 cout<<"\nEnter box breadth:";
 cin>>breadth;
 }
 void disp_box_info()
 {
 int area=(width*breadth);
 int volume=(width*breadth*height);
 cout<<"\nArea of Box="<<area;
 cout<<"\nVolume of Box:"<<volume;
 }
};
void main()
{
 Box b1,*ptr;
 clrscr();
 ptr=&b1;
 ptr->get_box_info();
 ptr->disp_box_info();
 getch();
} 