/*Define a class to represent lecture details. 
Include the following members and the program should handle at least details of 5 lecturer.
Data members: Name of the lecturer Name of the subject Name of course Number of lecturers 
Data functions: To assign initial values to add a lecture detail to display name and lecture details.*/
#include<iostream>
using namespace std;
class lecturer_detail
{
	public:
		string cour,name,sub;
		int num;
		void course()
		{
		cout<<"Name of the course: ";
		cin>>cour;
		cout<<"Number of lecturers: ";
		cin>>num;
		}
		void lec()
		{
			cout<<"Name of the lecturer: ";
			cin>>name;
			cout<<"Name of the subject: ";
			cin>>sub;
		}
		void display()
		{
			cout<<"\n\nName of course:- "<<cour<<"\nNumber of lecturers: "<<num<<endl;
		}
		void display1()
		{
			cout<<"\nLecturer's name: "<<name<<"\nSubject: "<<sub<<endl;
		}		
};
int main()
{
	lecturer_detail obj1,lec1,lec2,lec3,lec4,lec5;
	obj1.course();
	lec1.lec();
	lec2.lec();
	lec3.lec();
	lec4.lec();
	lec5.lec();
	obj1.display();
	lec1.display1();
	lec2.display1();
	lec3.display1();
	lec4.display1();
	lec5.display1();
	
	return 0;
}
