//WAP to read and display contents of file.
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
 ifstream fin;
 char ch;
 clrscr();
 fin.open("abc.txt",ios::in);
 while(!fin.eof())
 {
 fin.get(ch);
 cout<<ch;
 }
 fin.close();
 getch();
} 
