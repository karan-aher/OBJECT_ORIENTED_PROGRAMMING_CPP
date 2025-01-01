//WAP to find out no of white spaces present in file.
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
 ifstream fin;
 char ch;
 int count=0;
 clrscr();
 fin.open("abc.txt",ios::in);
 while(!fin.eof())
 {
 fin.get(ch);
 if(ch==' ')
 {
 count++;
 }
 }
 cout<<"\nNo of white spaces="<<count;
 fin.close();
 getch();
} 