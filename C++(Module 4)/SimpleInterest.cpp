//Write a program of find the simple interest using constructor with dynamic initialization.
//Make constructor like Interest (int principal, int year, int rate) Interest (int principal, int year,float rate = 2.5)

#include<iostream>
using namespace std;

class interest
{
	int principal,year,rate;
	float si;
	public:
		interest(int p,int n,int r)
		{
			principal=p;
			year=n;
			rate=r;
		}
		void setvalue()
		{
			cout<<"The Principal amount is = "<<principal<<endl;
			cout<<"The Time duration in years is = "<<year<<endl;
			cout<<"The Interest rate is = "<<rate<<endl;
			si=principal*year*rate/100;
			cout<<"\n\nThe simple interest is= "<<si<<endl;
		}
};
class int1
{
	int principal,year;
	float rate,si;
	public:
		int1(int p,int n,float r=2.5)
		{
			principal=p;
			year=n;
			rate=r;
		}
		void setvalue()
		{
			cout<<"\n\nThe Principal amount is = "<<principal<<endl;
			cout<<"The Time duration in years is = "<<year<<endl;
			cout<<"The Interest rate is = "<<rate<<endl;
			si=principal*year*rate/100;
			cout<<"\n\nThe simple interest is= "<<si<<endl;
		}
};
int main()
{
	interest obj(1000,5,10);
	int1 obj1(1158,5);
	obj.setvalue();
	obj1.setvalue();
	return 0;
}
