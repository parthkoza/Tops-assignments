#include <stdio.h>

//Write a program to make a square and cube of number.

int main()

{
	int a,b,c;
	printf("Enter the number: ");
	scanf("%d", &a);
	b=a*a;
	printf("Square of given number is: %d\n", b);
	c=a*a*a;
	printf("Cube of given number is: %d\n", c);
}
