//Write a program of to concatenate the two strings using Operator Overloading.
#include<iostream>
using namespace std;

class strcat
{
	public:
	string name;
	void get_name()
	{
		cout<<"Enter name: ";
		cin>>name;
	}
	void display()
	{
		cout<<name<<endl;
	}
	void operator +(strcat x);
};
void strcat :: operator +(strcat x)
{
	string newstr;
	newstr=name+x.name;
	cout<<newstr<<endl;
}
int main()
{
	strcat a,b;
	a.get_name();
	b.get_name();
	cout<<"first string: ";
	a.display();
	cout<<"second string: ";
	b.display();
	a+b;
	return 0;
}
