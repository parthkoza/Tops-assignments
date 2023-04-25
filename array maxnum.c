//Write a program to find out the max number from given 10 elements of array.

#include<stdio.h>
int main()
{
	int num[10],i,max=0;
	for(i=0;i<10;i++)
	{
		printf("Enter the %d number : ",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		if(num[i]>max)
		max=num[i];
	}
	printf("\nThe maximum value of above all value is : %d ",max);
	return 0;
}
