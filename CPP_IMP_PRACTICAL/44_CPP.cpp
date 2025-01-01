//WAP to insert five student’s records into file.
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
 ofstream fout;
 int i,rollno,marks;
 char name[10];
 clrscr();
 fout.open("student.txt",ios::app);
 cout<<"\nEnter five students details:";
 fout<<"\nROLLNO\tNAME\tMARKS";
 fout<<"\n===========================";
 for(i=1;i<=5;i++)
 {
 cout<<"\nEnter student rollno:";
 cin>>rollno;
 cout<<"\nEnter student name:";
 cin>>name;
 cout<<"\nEnter student marks:";
 cin>>marks;
 fout<<"\n"<<rollno<<"\t"<<name<<"\t"<<marks;
 }
 cout<<"File written successfully";
 fout.close();
 getch();
} 
