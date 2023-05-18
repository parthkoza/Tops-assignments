//Write a program of to swap the two values using templates
#include<iostream>
using namespace std;

template <class s>
void numswap(s& a, s& b)
{
	s c;
	c=a;
	a=b;
	b=c;
}
int main()
{
	float a,b;
	cout<<"value of a = ";
	cin>>a;
	cout<<"value of b = ";
	cin>>b;
	numswap(a,b);
	cout<<"After swapping:-\nvalue of a = "<<a<<"\n"<<"value of b = "<<b<<endl;
	return 0;
}
