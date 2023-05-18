//Write a program to find the multiplication values and the cubic values using inline function.
#include<iostream>
using namespace std;

inline int multi(int a,int b)
{
	return a*b;
}
inline int cube(int p)
{
	return p*p*p;
}
int main()
{
	int x,y;
	cout<<"Enter the number1: ";
	cin>>x;
	cout<<"Enter the number2: ";
	cin>>y;
	cout<<"\nMultiplication of "<<x<<" and "<<y<<" is = "<<multi(x,y)<<endl;
	cout<<"\nThe cube of "<<x<<" is = "<<cube(x)<<endl;
	cout<<"\nThe cube of "<<y<<" is = "<<cube(y)<<endl;
	return 0;	
}
