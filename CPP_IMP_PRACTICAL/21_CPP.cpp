/*WAP to implement inheritance shown below figure. Assume suitable member function
*/
#include<iostream.h>
#include<conio.h>
class Furniture
{
 protected:
 char material[10];
 int price;
 public:
 void get_furniture_info()
 {
 cout<<"\nEnter material name:";
 cin>>material;
 cout<<"\nEnter price:";
 cin>>price;
 }
 void disp_furniture_info()
 {
 cout<<"\nMaterial Name:"<<material;
 cout<<"\nPrice:"<<price;
 }
};
class Table:public Furniture
{
 protected:
 int height;
 int surface;
 public:
 void get_table_info()
 {
 cout<<"\nEnter height of table:";
 cin>>height;
 cout<<"\nEnter surface of table:";
 cin>>surface;
 }
 void disp_table_info()
 {
 cout<<"\nTable Height:"<<height;
 cout<<"\nTable surface:"<<surface;
 }
};
void main()
{
 Table t1;
 clrscr();
 t1.get_furniture_info();
 t1.get_table_info();
 t1.disp_furniture_info();
 t1.disp_table_info();
 getch();
} 