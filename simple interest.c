#include <stdio.h>


//Write a program to find the simple Interest & Compound Interest.

int main()
{
	float a,b,c,d;
	
	printf("Enter the amount:  ");
	scanf("%f",&a);
	printf("Enter the rate:  ");
	scanf("%f",&b);
	printf("Enter the year:  ");
	scanf("%f",&c);
	
	d=(a*b*c)/100;
	printf("Your simple interest is: %f",d);
	
	
	
	
	return 0;
}
