/*
Write a C++ program to declare a class birthday having data members day, month,
year. Accept this information for five objects using pointer to the array of objects
*/
#include<iostream.h>
#include<conio.h>
class Birthday
{
 private:
 int day,month,year;
 public:
 void getdata()
 {
 cout<<"\nEnter day:";
 cin>>day;
 cout<<"\nEnter month:";
 cin>>month;
 cout<<"\nEnter year:";
 cin>>year;
 }
 void putdata()
 {
 cout<<"\n"<<day<<"/"<<month<<"/"<<year;
 }
};
void main()
{
 Birthday b[5],*ptr;
 int i;
 clrscr();
 cout<<"\nEnter five birth date:";
 for(i=0;i<5;i++)
 {
 ptr=&b[i];
 ptr->getdata();
 }
 for(i=0;i<5;i++)
 {
 ptr=&b[i];
 ptr->putdata();
 }
 getch();
} 