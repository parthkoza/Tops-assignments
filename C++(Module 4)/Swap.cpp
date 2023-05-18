//Write a program to swap the two numbers using friend function
#include<iostream>
using namespace std;

class demo
{
	private:
	int a,b;
	public:
	void getvalues()
	{
		cout<<"Initial value of a = ";
		cin>>a;
		cout<<"Initial value of b = ";
		cin>>b;
	}
	friend void s1(demo& x);
	void display()
	{
		cout<<"\nAfter swapping:-"<<endl;
		cout<<"Value of a = "<<a<<"\nValue of b = "<<b;
	}
		
};
void s1(demo& x)
{
	x.a=x.a+x.b;
	x.b=x.a-x.b;
	x.a=x.a-x.b;
}
int main()
{
	demo obj;
	obj.getvalues();
	s1(obj);
	obj.display();
	return 0;
}
