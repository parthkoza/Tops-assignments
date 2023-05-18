/*Assume a class cricketer is declared. 
Declare a derived class batsman from cricketer. 
Data member of batsman. Total runs, Average runs and best performance.
Member functions input data, calculate average runs, Display data. (Single Inheritance)*/
#include<iostream>
using namespace std;

class cricketer
{
	public:
	int matches;
	string name;
	void getcrick()
	{
		cout<<"Enter the name of cricketer: ";
		cin>>name;
		cout<<"Enter the number of matches played by cricketer: ";
		cin>>matches;	
	}
	void showcrick()
	{
		cout<<"\n\n\nThe name of cricketer= "<<name<<endl;
		cout<<"The number of matches played by cricketer= "<<matches<<endl;	
	}	
};
class batsman:public cricketer
{
	public:
	int t_run,notout,best;
	float t_run1,avg; 
	void getbats()
	{
		cout<<"Enter total runs: ";
		cin>>t_run;
		cout<<"Enter Number of times batsman remain notout: ";
		cin>>notout;
		cout<<"Enter Best Performance: ";
		cin>>best;
	}
	void showbats()
	{
		cout<<"Total runs = "<<t_run<<endl;
		cout<<"Number of times batsman remain notout = "<<notout<<endl;
		cout<<"Best Performance: "<<best<<endl;
		t_run1=float(t_run);
		avg=t_run1/(matches-notout);
		cout<<"Average runs = "<<avg<<endl;
	}
}; 
int main()
{
	batsman bat1;
	bat1.getcrick();
	bat1.getbats();
	bat1.showcrick();
	bat1.showbats();
	return 0;
}
