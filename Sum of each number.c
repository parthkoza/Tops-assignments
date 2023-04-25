//Write a program make a summation of given number

#include<stdio.h>
int main()
{
	int a,sum=0;
	printf("Enter a number :");
	scanf("%d",&a);
	while(a!=0)
	{
		sum=sum+a%10;    //for remainder and addition 
		a=a/10;
	}
	printf("\nThe summation of given number is :%d",sum);
	
	return 0;
}
