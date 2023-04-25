//Write a program to print the number in reverse order

#include<stdio.h>
int main()
{
	int a,rev=0,rem=0;
	printf("Enter a number :");
	scanf("%d",&a);
	while(a!=0)
	{
		rev=rev*10;
		rem=a%10;
		rev=rev+rem;
		a=a/10;
	}
	printf("\nThe reverse of your number is :%d",rev);
	return 0;
}
