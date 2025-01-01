/*Write a C++ program to declare a class "Book" having data members book_name,
auther_name, and price . Accept this information for one object of the class using
pointer to that object.*/
 #include<iostream.h>
#include<conio.h>
class Book
{
 protected:
 char book_name[20];
 char author_name[20];
 int price;
 public:
 void get_book_info()
 {
 cout<<"\nEnter Book Name:";
 cin>>book_name;
 cout<<"\nEnter Author Name:";
 cin>>author_name;
 cout<<"\nEnter Book Price:";
 cin>>price;
 }
 void disp_book_info()
 {
 cout<<"\nBook Name:"<<book_name;
 cout<<"\nAuthor Name:"<<author_name;
 cout<<"\nBook Price:"<<price;
 }
};
void main()
{
 Book b1,*ptr;
 clrscr();
 ptr=&b1;
 ptr->get_book_info();
 ptr->disp_book_info();
 getch();
} 