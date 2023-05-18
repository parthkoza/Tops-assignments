//Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;
class matrix
{
	public:
	int i,j,m1[3][3];
	void get_mat()
	{
		cout<<"enter values of 3x3 matrix:- "<<endl;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"enter element: ";
				cin>>m1[i][j];
			}
		}	
	}
	void display_mat()
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<" "<<m1[i][j];
			}
			cout<<endl;
		}
		
	}
	void operator +(matrix x);	
};
void matrix::operator +(matrix x)
{
	int s[3][3];
	cout<<"Addition of matrixes: \n";
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				s[i][j]=m1[i][j]+x.m1[i][j];
			}
		}
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<" "<<s[i][j];
			}
			cout<<endl;
		}
}
int main()
{
	matrix a,b;
	a.get_mat();
	b.get_mat();
	cout<<"First matrix:-  \n";
	a.display_mat();
	cout<<"Second matrix:-  \n";
	b.display_mat();
	a+b;
	return 0;
}
