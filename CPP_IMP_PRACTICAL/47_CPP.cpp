//WAP to find out no of occurrences of ‘a’ present in file.
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
 if(ch=='a')
 {
 count++;
 }
 }
 cout<<"\nNo of alphabet a present in file="<<count;
 fin.close();
 getch();
} 