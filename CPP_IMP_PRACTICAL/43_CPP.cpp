//File Write Program
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
 ofstream fout;
 clrscr();
 fout.open("msbte.txt",ios::out);
 fout<<"Welcome to file handling programming";
 cout<<"File written successfully";
 fout.close();
 getch();
} 
