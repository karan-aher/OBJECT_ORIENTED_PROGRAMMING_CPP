//WAP to copy contents of one file to another file.
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
 ifstream fin;
 ofstream fout;
 char ch;
 clrscr();
 fin.open("abc.txt",ios::in);
 fout.open("xyz.txt",ios::out);
 while(!fin.eof())
 {
 fin.get(ch);
 fout<<ch;
 }
 cout<<"\ncontents of file copied successfully";
 fin.close();
 fout.close();
 getch();
} 