/*Write a program to define a class student having data members name and roll no. Accept and
display data for one object. Define the member function inside the class.*/
#include<iostream.h>
#include<conio.h>
class Student
{
 private:
 int rollno;
 char name[10];
 public:
 void accept_stud_info()
 {
 cout<<"\nEnter Student Roll No:";
 cin>>rollno;
 cout<<"\nEnter Student Name:";
 cin>>name;
 }
 void disp_stud_info()
 {
 cout<<"\nStudent Roll No:"<<rollno;
 cout<<"\nStudent Name:"<<name;
 }
};
void main()
{
 Student s1;
 clrscr();
 s1.accept_stud_info();
 s1.disp_stud_info();
 getch();
} 