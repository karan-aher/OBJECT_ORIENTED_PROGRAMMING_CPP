/*
WAP to create two classes test1 and test2 which stores marks of a student.
Read value for class objects and calculate average of two tests using friend function.
*/
#include<iostream.h>
#include<conio.h>
class Test2;
class Test1
{
 private:
 int marks1;
 public:
 void getMarks1()
 {
 cout<<"\nEnter Class Test-1 Marks:";
 cin>>marks1;
 }
 friend void average(Test1 m,Test2 n);
};
class Test2
{
 private:
 int marks2;
 public:
 void getMarks2()
 {
 cout<<"\nEnter Class Test-2 Marks:";
 cin>>marks2;
 }
 friend void average(Test1 m,Test2 n);
};
void average(Test1 m,Test2 n)
{
 float avg;
 avg=(float)(m.marks1+n.marks2)/2;
 cout<<"\nAverage Marks="<<avg;
}
void main()
{
 Test1 t1;
 Test2 t2;
 clrscr();
 t1.getMarks1();
 t2.getMarks2();
 average(t1,t2);
 getch();
} 