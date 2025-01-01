/*Write a C++ program to define a class "Student" having data members roll_no,
name. Derive a class "Marks" from "Student" having data members ml,m2,m3,
total and percentage. Accept and display data for one student.
*/
#include<iostream.h>
#include<conio.h>
class Student
{
 protected:
 int rollno;
 char name[10];
 public:
 void get_stud_info()
 {
 cout<<"\nEnter Student Roll No:";
 cin>>rollno;
 cout<<"\nEnter Student Name:";
 cin>>name;
 }
 void disp_stud_info()
 {
 cout<<"\nRoll No:"<<rollno;
 cout<<"\nName:"<<name;
 }
};
class Marks:public Student
{
 protected:
 int m1,m2,m3,total;
 float percentage;
 public:
 void get_marks()
 {
 cout<<"\nEnter three subjects marks:";
 cin>>m1>>m2>>m3;
 total=(m1+m2+m3);
 percentage=(float)total/3;
 }
 void disp_marks()
 {
 cout<<"\nTotal Marks:"<<total;
 cout<<"\nPercentage Marks:"<<percentage;
 }
};
void main()
{
 Marks obj1;
 clrscr();
 obj1.get_stud_info();
 obj1.get_marks();
 obj1.disp_stud_info();
 obj1.disp_marks();
 getch();
} 