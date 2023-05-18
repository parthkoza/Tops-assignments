/*Create a class person having members name and age. 
Derive a class student having member percentage. 
Derive another class teacher having member salary. 
Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)*/

#include<iostream>
using namespace std;

class student
{
	public:
		float percentage;
		void getstudent()
		{
			cout<<"Enter the Percentage: ";
			cin>>percentage;
		}
		void showstudent()
		{
			cout<<"Percentage is = "<<percentage<<endl;
		}
};
class teacher
{
	public:
		int salary;
		void getteacher()
		{
			cout<<"Enter the salary: ";
			cin>>salary;
		}
		void showteacher()
		{
			cout<<"The salary is = "<<salary<<endl;
		}
};
class person:public teacher,public student
{ 
	public:
		string name;
		int age;
		void getperson()
		{
			cout<<"Enter the name: ";
			cin>>name;
			cout<<"Enter the age: ";
			cin>>age;
		}
		void showperson()
		{
			cout<<"Name: "<<name<<"\nAge: "<<age<<endl;
		}
};
int main()
{
	person p1,p2,p3,p4;
	cout<<"Details of teacher:-"<<endl;
	p1.getperson();
	p1.getteacher();
	p1.showperson();
	p1.showteacher();
	cout<<"Details of student1:-"<<endl;
	p2.getperson();
	p2.getstudent();
	p2.showperson();
	p2.showstudent();
	cout<<"Details of student2:-"<<endl;
	p3.getperson();
	p3.getstudent();
	p3.showperson();
	p3.showstudent();
	cout<<"Details of student3:-"<<endl;
	p4.getperson();
	p4.getstudent();
	p4.showperson();
	p4.showstudent();
	return 0;
}
