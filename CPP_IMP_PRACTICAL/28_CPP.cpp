#include<iostream.h>
#include<conio.h>
class Cricketer
{
 protected:
 char team_name[20];
 char player_name[20];
 public:
 void get_cricketer_info()
 {
 cout<<"\nEnter Team Name:";
 cin>>team_name;
 cout<<"\nEnter Player Name:";
 cin>>player_name;
 }
 void disp_cricketer_info()
 {
 cout<<"\nTeam Name:"<<team_name;
 cout<<"\nPlayer Name:"<<player_name;
 }
};
class Bowler:virtual public Cricketer
{
 protected:
 int no_of_wickets;
 public:
 void get_bowler_info()
 {
 cout<<"\nNo of Wickets taken:";
 cin>>no_of_wickets;
 }
 void disp_bowler_info()
 {
 cout<<"\nNo Of Wickets:"<<no_of_wickets;
 }
};
class Batsman:virtual public Cricketer
{
 protected:
 int total_runs;
 public:
 void get_batsman_info()
 {
 cout<<"\nEnter Total Runs:";
 cin>>total_runs;
 }
 void disp_batsman_info()
 {
 cout<<"\nTotal Runs:"<<total_runs;
 }
};
class Allrounder:public Bowler,public Batsman
{
 protected:
 int no_of_records;
 public:
 void get_allrounder_info()
 {
 cout<<"\nEnter no of records:";
 cin>>no_of_records;
 }
 void disp_allrounder_info()
 {
 cout<<"\nNo of records:"<<no_of_records;
 }
};
void main()
{
 Allrounder a1;
 clrscr();
 a1.get_cricketer_info();
 a1.get_bowler_info();
 a1.get_batsman_info();
 a1.get_allrounder_info();
 a1.disp_cricketer_info();
 a1.disp_bowler_info();
 a1.disp_batsman_info();
 a1.disp_allrounder_info();
 getch();
} 