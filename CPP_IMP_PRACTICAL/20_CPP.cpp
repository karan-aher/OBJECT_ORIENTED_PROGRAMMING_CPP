/*
Define a class student which contain member variables as rollno ,name and course.
Write a program using constructor as "Computer Engineering" for course . Accept this data for
objects of class and display the data.
*/
#include<iostream.h>
#include<string.h>
#include<conio.h>
class Student
{
 private:
 int rollno;
 char name[20],course[20];
 public:
 Student(char c[]="Computer Engineering")
 {
 cout<<"\nEnter Student Roll No:";
 cin>>rollno;
 cout<<"\nEnter Student Name:";
 cin>>name;
 strcpy(course,c);
 }
 void display()
 {
 cout<<"\nStudent Roll No:"<<rollno;
 cout<<"\nStudent Name:"<<name;
 cout<<"\nCourse Name:"<<course;
 }
};
void main()
{
 clrscr();
 Student s1;
 s1.display();
 getch();
}